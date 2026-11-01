"""Offline regression tests (no network). Run with: python -m pytest tests/test_offline_regressions.py"""
import datetime
import json
import sys
from pathlib import Path

import pytest

sys.path.insert(0, str(Path(__file__).parent.parent))

from src import database as dbm
from src import runner
from src.codechef_client import CodeChefAuthError, CodeChefClient, VerdictTimeout
from src.solver import CodeChefSolver

ACCOUNT = "reyhaan_s"


# ---------------------------------------------------------------- fakes
class FakeClient:
    session_cookie = "x"

    def __init__(self, problems, verdicts, pending_verdicts=None):
        self.problems = problems
        self.verdicts = list(verdicts)       # per submit: dict, "timeout", "auth", or Exception
        self.pending_verdicts = pending_verdicts or {}
        self.submissions = []
        self._next_id = 1000

    def fetch_practice_problems(self, page=0, **kw):
        return self.problems if page == 0 else []

    def fetch_problem_details(self, code):
        return {"problem_code": code, "problem_name": code, "cleanContent": "real statement"}

    def fetch_profile_solved_count(self, username):
        return None

    def submit_solution(self, code, src, lang):
        v = self.verdicts.pop(0)
        if v == "auth":
            raise CodeChefAuthError("logged out")
        if isinstance(v, Exception):
            raise v
        self._next_id += 1
        sid = str(self._next_id)
        self.submissions.append((code, sid))
        self._pending = (sid, v)
        return sid

    def poll_verdict(self, sid, max_wait_seconds=None):
        _, v = self._pending
        if v == "timeout":
            raise VerdictTimeout(sid, 1)
        return v

    def check_verdict_once(self, sid):
        return self.pending_verdicts.get(sid)


class FakeSolver:
    api_key = "k"

    def __init__(self, fail_generation=False, fail_doc=False):
        self.fail_generation = fail_generation
        self.fail_doc = fail_doc

    def generate_initial_solution(self, details, lang):
        if self.fail_generation:
            raise RuntimeError("All Gemini candidate models failed")
        return "int main(){}"

    generate_self_healing_solution = lambda self, **kw: "int main(){/*v2*/}"

    def generate_explanation_doc(self, *a, **kw):
        if self.fail_doc:
            raise RuntimeError("Gemini down")
        return "# doc"


AC = {"passed": True, "result_code": "accepted"}
WA = {"passed": False, "result_code": "wrong", "diagnostic": "WA"}


@pytest.fixture
def env(tmp_path, monkeypatch):
    cfg = runner.config
    monkeypatch.setattr(cfg, "data_file", tmp_path / "data" / "solved_problems.json")
    monkeypatch.setattr(cfg, "solutions_dir", tmp_path / "solutions")
    monkeypatch.setattr(cfg, "codechef_username", ACCOUNT)
    monkeypatch.setattr(cfg, "dry_run", False)
    monkeypatch.setattr(cfg, "randomize_batch", False)
    monkeypatch.setattr(cfg, "min_problems_per_run", 1)
    monkeypatch.setattr(cfg, "max_retries", 3)
    monkeypatch.setattr(runner.time, "sleep", lambda s: None)
    return cfg


def run_with(monkeypatch, client, solver):
    monkeypatch.setattr(runner, "CodeChefClient", lambda: client)
    monkeypatch.setattr(runner, "CodeChefSolver", lambda: solver)
    runner.run()


def read_db(cfg):
    return json.loads(cfg.data_file.read_text())


# ---------------------------------------------------------------- root cause
def test_forked_database_is_archived_not_counted(env, monkeypatch):
    """Reproduces the reported bug: an inherited upstream DB must not be treated as ours."""
    env.data_file.parent.mkdir(parents=True)
    inherited = {"total_solved": 577, "solved_codes": [f"P{i}" for i in range(577)],
                 "failed_codes": ["X"], "history": []}
    env.data_file.write_text(json.dumps(inherited))

    client = FakeClient([{"code": "P0", "name": "p0"}], [AC])
    run_with(monkeypatch, client, FakeSolver())

    db = read_db(env)
    assert db["account"] == ACCOUNT
    # P0 was "solved" by someone else; this account must attempt it.
    assert client.submissions and client.submissions[0][0] == "P0"
    assert db["solved_codes"] == ["P0"] and db["total_solved"] == 1
    archived = list((env.data_file.parent / "archive").glob("*.json"))
    assert len(archived) == 1
    assert json.loads(archived[0].read_text()) == inherited  # original preserved verbatim


def test_same_account_database_is_reused(env):
    env.data_file.parent.mkdir(parents=True)
    db = dbm.empty_database(ACCOUNT)
    dbm.record_accepted(db, "A", "a", "1", 1)
    dbm.save_database(env.data_file, db)
    assert dbm.load_database(env.data_file, ACCOUNT)["solved_codes"] == ["A"]
    assert not (env.data_file.parent / "archive").exists()


def test_accepted_requires_submission_id():
    with pytest.raises(ValueError):
        dbm.record_accepted(dbm.empty_database(ACCOUNT), "A", "a", "", 1)


def test_accepted_record_stores_evidence(env, monkeypatch):
    run_with(monkeypatch, FakeClient([{"code": "A", "name": "a"}], [AC]), FakeSolver())
    h = read_db(env)["history"][0]
    assert h["solution_id"] == "1001" and h["account"] == ACCOUNT and h["status"] == "Accepted"


# ---------------------------------------------------------------- timeouts
def test_timeout_is_pending_not_resubmitted_then_reconciled(env, monkeypatch):
    client = FakeClient([{"code": "FINALSALE", "name": "Sale"}], ["timeout"])
    run_with(monkeypatch, client, FakeSolver())
    db = read_db(env)
    assert len(client.submissions) == 1, "a timed-out submission must not be resubmitted"
    assert db["solved_codes"] == [] and db["failed_codes"] == []
    assert db["pending"][0]["solution_id"] == "1001"

    # Next run: the judge has finished and accepted it.
    client2 = FakeClient([], [], pending_verdicts={"1001": AC})
    run_with(monkeypatch, client2, FakeSolver())
    db = read_db(env)
    assert db["solved_codes"] == ["FINALSALE"] and db["pending"] == []
    assert db["history"][0]["solution_id"] == "1001"


# ---------------------------------------------------------------- failure classification
def test_gemini_outage_does_not_blacklist(env, monkeypatch):
    client = FakeClient([{"code": "A", "name": "a"}], [])
    run_with(monkeypatch, client, FakeSolver(fail_generation=True))
    db = read_db(env)
    assert db["failed_codes"] == [] and db["solved_codes"] == []


def test_network_error_on_submit_does_not_blacklist(env, monkeypatch):
    client = FakeClient([{"code": "A", "name": "a"}], [ConnectionError("x"), ConnectionError("y")])
    run_with(monkeypatch, client, FakeSolver())
    assert read_db(env)["failed_codes"] == []


def test_auth_error_aborts_run_without_blacklisting(env, monkeypatch):
    client = FakeClient([{"code": "A", "name": "a"}], ["auth"])
    with pytest.raises(SystemExit):
        run_with(monkeypatch, client, FakeSolver())
    assert read_db(env)["failed_codes"] == []


def test_three_judge_rejections_blacklist(env, monkeypatch):
    client = FakeClient([{"code": "A", "name": "a"}], [WA, WA, WA])
    run_with(monkeypatch, client, FakeSolver())
    db = read_db(env)
    assert db["failed_codes"] == ["A"] and len(client.submissions) == 3


def test_doc_failure_after_accept_does_not_resubmit(env, monkeypatch):
    client = FakeClient([{"code": "A", "name": "a"}], [AC, AC])
    run_with(monkeypatch, client, FakeSolver(fail_doc=True))
    assert len(client.submissions) == 1
    assert read_db(env)["solved_codes"] == ["A"]
    assert (env.solutions_dir / "A" / "README.md").exists()


def test_missing_username_exits(env, monkeypatch):
    monkeypatch.setattr(env, "codechef_username", "")
    with pytest.raises(SystemExit):
        run_with(monkeypatch, FakeClient([], []), FakeSolver())


def test_dry_run_records_nothing(env, monkeypatch):
    monkeypatch.setattr(env, "dry_run", True)
    run_with(monkeypatch, FakeClient([{"code": "A", "name": "a"}], []), FakeSolver())
    assert read_db(env)["solved_codes"] == []


# ---------------------------------------------------------------- counters
def test_today_count_is_account_scoped():
    today = datetime.date(2026, 10, 31)
    hist = [
        {"account": ACCOUNT, "status": "Accepted", "time": "2026-10-31 13:40:10"},
        {"status": "Accepted", "time": "2026-10-31 10:00:00"},            # inherited, no account
        {"account": "someone", "status": "Accepted", "time": "2026-10-31 10:00:00"},
        {"account": ACCOUNT, "status": "Accepted", "time": "2026-10-30 10:00:00"},
    ]
    assert dbm.count_solved_on(hist, ACCOUNT, today) == 1


def test_committed_database_is_bound_and_evidenced():
    db = json.loads((Path(__file__).parent.parent / "data" / "solved_problems.json").read_text())
    assert db["account"] == ACCOUNT
    assert db["total_solved"] == len(set(db["solved_codes"])) == len(db["history"])
    assert all(h["solution_id"] and h["status"] == "Accepted" for h in db["history"])
    assert not set(db["solved_codes"]) & set(db["failed_codes"])


# ---------------------------------------------------------------- verdicts & models
def test_verdict_parser_variants():
    c = CodeChefClient(session_cookie="a=b")
    assert c.parse_verdict({"result_code": "accepted"})["passed"]
    assert c.parse_verdict({"result_code": "correct"})["passed"]
    assert not c.parse_verdict({"result_code": "wrong", "score": 0})["passed"]
    assert not c.parse_verdict({"result_code": "compilation_error"})["passed"]


def test_poll_verdict_raises_verdict_timeout(monkeypatch):
    c = CodeChefClient(session_cookie="a=b")
    monkeypatch.setattr(c, "check_verdict_once", lambda sid: None)
    monkeypatch.setattr("src.codechef_client.time.sleep", lambda s: None)
    with pytest.raises(VerdictTimeout):
        c.poll_verdict("1", max_wait_seconds=0)


def test_solver_skips_404_models_for_rest_of_run():
    calls = []

    class Models:
        def generate_content(self, model, contents, config):
            calls.append(model)
            if model != "gemini-3.1-flash-lite":
                raise RuntimeError("404 NOT_FOUND. no longer available to new users")
            return type("R", (), {"text": "```cpp\nok\n```"})()

    s = CodeChefSolver(api_key="k", model_name="gemini-2.5-flash")
    s.client = type("C", (), {"models": Models()})()
    s._generate_with_resilience("p")
    first = list(calls)
    calls.clear()
    s._generate_with_resilience("p")
    assert first == ["gemini-2.5-flash", "gemini-2.5-flash-lite", "gemini-3.1-flash-lite"]
    assert calls == ["gemini-3.1-flash-lite"]


# ---------------------------------------------------------------- sprint-mode safety stops
def test_gemini_quota_exhaustion_stops_run_without_blacklisting(env, monkeypatch):
    class QuotaSolver(FakeSolver):
        def generate_initial_solution(self, details, lang):
            raise RuntimeError("All Gemini candidate models failed. Last error: 429 RESOURCE_EXHAUSTED")

    probs = [{"code": c, "name": c} for c in ("A", "B", "C")]
    monkeypatch.setattr(env, "min_problems_per_run", 3)
    client = FakeClient(probs, [])
    fetched = []
    orig = client.fetch_problem_details
    client.fetch_problem_details = lambda code: fetched.append(code) or orig(code)
    run_with(monkeypatch, client, QuotaSolver())
    assert fetched == ["A"], "run must stop at the first quota error"
    assert read_db(env)["failed_codes"] == []


def test_runtime_budget_stops_starting_new_problems(env, monkeypatch):
    probs = [{"code": c, "name": c} for c in ("A", "B")]
    monkeypatch.setattr(env, "min_problems_per_run", 2)
    monkeypatch.setattr(env, "max_runtime_minutes", 1)
    clock = iter([0, 0, 120, 120, 120])  # start, before A, before B (2 min later)
    monkeypatch.setattr(runner.time, "monotonic", lambda: next(clock, 120))
    client = FakeClient(probs, [AC, AC])
    run_with(monkeypatch, client, FakeSolver())
    assert read_db(env)["solved_codes"] == ["A"]


def test_explanations_can_be_disabled(env, monkeypatch):
    class CountingSolver(FakeSolver):
        doc_calls = 0

        def generate_explanation_doc(self, *a, **kw):
            CountingSolver.doc_calls += 1
            return "# doc"

    monkeypatch.setattr(env, "generate_explanations", False)
    run_with(monkeypatch, FakeClient([{"code": "A", "name": "a"}], [AC]), CountingSolver())
    assert CountingSolver.doc_calls == 0
    readme = (env.solutions_dir / "A" / "README.md").read_text()
    assert "Explanation skipped" in readme
    assert (env.solutions_dir / "A" / "solution.cpp").exists()
    assert read_db(env)["solved_codes"] == ["A"]


def test_chain_signal_written_to_github_output(env, monkeypatch, tmp_path):
    out = tmp_path / "gh_output"
    monkeypatch.setenv("GITHUB_OUTPUT", str(out))
    run_with(monkeypatch, FakeClient([{"code": "A", "name": "a"}], [AC]), FakeSolver())
    assert "continue=true" in out.read_text()

    out.write_text("")
    run_with(monkeypatch, FakeClient([], []), FakeSolver())  # nothing left to solve
    assert "continue=false" in out.read_text()


def test_solver_retries_overloaded_model_before_giving_up(monkeypatch):
    calls = []

    class Models:
        def generate_content(self, model, contents, config):
            calls.append(model)
            if len(calls) < 3:
                raise RuntimeError("503 UNAVAILABLE. model overloaded")
            return type("R", (), {"text": "```cpp\nok\n```"})()

    monkeypatch.setattr("src.solver.time.sleep", lambda s: None)
    s = CodeChefSolver(api_key="k", model_name="gemini-3.1-flash-lite")
    s.client = type("C", (), {"models": Models()})()
    s._generate_with_resilience("p")
    assert calls == ["gemini-3.1-flash-lite"] * 3


def test_problem_with_submissions_disabled_is_skipped_not_fatal(env, monkeypatch):
    from src.codechef_client import SubmissionsDisabled
    probs = [{"code": "ANSLEAK", "name": "x"}, {"code": "B", "name": "b"}]
    monkeypatch.setattr(env, "min_problems_per_run", 2)
    client = FakeClient(probs, [SubmissionsDisabled("temporarily disabled"), AC])
    run_with(monkeypatch, client, FakeSolver())  # must not sys.exit
    db = read_db(env)
    assert db["solved_codes"] == ["B"]
    assert "ANSLEAK" not in db["failed_codes"]


def test_submit_403_disabled_vs_auth(monkeypatch):
    from src.codechef_client import SubmissionsDisabled

    class Resp:
        def __init__(self, code, text):
            self.status_code, self.text = code, text

    c = CodeChefClient(session_cookie="a=b")
    monkeypatch.setattr(c, "get_csrf_token", lambda code: "t")
    monkeypatch.setattr(c.http, "post", lambda *a, **k: Resp(403, '{"status":"error","message":"Submissions on this problem are temporarily disabled"}'))
    with pytest.raises(SubmissionsDisabled):
        c.submit_solution("ANSLEAK", "x")
    monkeypatch.setattr(c.http, "post", lambda *a, **k: Resp(403, "Forbidden"))
    with pytest.raises(CodeChefAuthError):
        c.submit_solution("ANSLEAK", "x")
