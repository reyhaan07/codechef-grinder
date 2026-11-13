"""Compile and run a C++ solution on the problem's sample tests before submitting.

Every wrong submission stays on the CodeChef profile forever, so a solution is
only submitted after it reproduces the sample outputs locally.
"""

import logging
import shutil
import subprocess
import tempfile
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple

logger = logging.getLogger("LocalJudge")


def extract_samples(details: Dict[str, Any]) -> List[Tuple[str, str]]:
    comps = details.get("problemComponents") or {}
    samples = []
    for stc in comps.get("sampleTestCases") or []:
        inp, out = str(stc.get("input", "")).strip(), str(stc.get("output", "")).strip()
        if inp and out:
            samples.append((inp, out))
    return samples


def _tokens_match(expected: str, actual: str) -> bool:
    exp, act = expected.split(), actual.split()
    if len(exp) != len(act):
        return False
    for e, a in zip(exp, act):
        if e == a or e.lower() == a.lower():  # YES/yes are both accepted on CodeChef
            continue
        try:
            if abs(float(e) - float(a)) <= 1e-6 * max(1.0, abs(float(e))):
                continue
        except ValueError:
            pass
        return False
    return True


def check_cpp(source: str, samples: List[Tuple[str, str]], time_limit: float = 5.0) -> Optional[str]:
    """Return None if all samples pass (or the check cannot run), else a diagnostic."""
    compiler = shutil.which("g++")
    if not compiler or not samples:
        return None

    with tempfile.TemporaryDirectory() as tmp:
        src, binary = Path(tmp) / "sol.cpp", Path(tmp) / "sol"
        src.write_text(source, encoding="utf-8")
        try:
            comp = subprocess.run(
                [compiler, "-std=c++17", "-O2", "-o", str(binary), str(src)],
                capture_output=True, text=True, timeout=60,
            )
        except subprocess.TimeoutExpired:
            return None  # slow compiler: don't block, let the judge decide
        if comp.returncode != 0:
            return f"Verdict: COMPILATION ERROR (local)\nCompiler Log:\n{comp.stderr[-1500:]}"

        for i, (inp, expected) in enumerate(samples, 1):
            try:
                run = subprocess.run(
                    [str(binary)], input=inp + "\n", capture_output=True, text=True, timeout=time_limit,
                )
            except subprocess.TimeoutExpired:
                return f"Verdict: TIME LIMIT EXCEEDED on sample {i} (local, >{time_limit}s)\nInput:\n{inp[:500]}"
            if run.returncode != 0:
                return f"Verdict: RUNTIME ERROR on sample {i} (local, exit {run.returncode})\nInput:\n{inp[:500]}"
            if not _tokens_match(expected, run.stdout):
                return (
                    f"Verdict: WRONG ANSWER on sample {i} (local)\n"
                    f"Input:\n{inp[:500]}\nExpected:\n{expected[:500]}\nGot:\n{run.stdout.strip()[:500]}"
                )
    return None
