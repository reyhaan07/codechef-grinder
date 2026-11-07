#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N truth-tellers and M potential liars.
 * We ask X people. Let the responses be R1, R2, ..., RX.
 * We need to be sure of the correct path regardless of which X people we pick.
 * 
 * If we pick X people, in the worst case, we pick all M liars and (X-M) truth-tellers.
 * If X <= M, we could pick X liars who all lie, and we have no way to distinguish 
 * the truth from the lies.
 * 
 * If we pick X people, the number of truth-tellers we might have is at least 
 * max(0, X - M).
 * 
 * To be sure of the path, the number of truth-tellers must be strictly greater 
 * than the number of liars in the set of X people we chose.
 * Specifically, if we pick X people, we might have (X-k) truth-tellers and k liars.
 * The liars can coordinate to give the wrong answer. The truth-tellers will 
 * always give the right answer.
 * We can be sure if the number of truth-tellers is greater than the number of liars.
 * 
 * In the worst case, we pick all M liars and (X-M) truth-tellers.
 * We need (X-M) > M, which means X > 2M.
 * Also, we must have enough people to pick from, so X <= N + M.
 * 
 * If N > M, then picking all N+M people gives us N truth-tellers and M liars.
 * Since N > M, the majority will be truth-tellers, so we can determine the path.
 * The minimal X is M + 1.
 * If N <= M, even if we pick all N+M people, we have N truth-tellers and M liars.
 * Since N <= M, we cannot be sure of the path.
 */

void solve() {
    int N, M;
    cin >> N >> M;

    if (N > M) {
        // We need to pick enough people such that the number of truth-tellers 
        // is strictly greater than the number of liars in any subset of size X.
        // In any subset of size X, the worst case is we have (X-M) truth-tellers 
        // and M liars.
        // We need (X-M) > M => X > 2M.
        // The smallest integer X > 2M is 2M + 1.
        // However, we must also ensure that even if we pick fewer truth-tellers, 
        // the condition holds. Actually, the condition is simply that the 
        // number of truth-tellers must be > number of liars.
        // With N > M, if we pick X = M + 1, we have at least (M+1) - M = 1 truth-teller.
        // Wait, the logic is: we need the count of truth-tellers > count of liars.
        // If we pick X people, we have at least max(0, X-M) truth-tellers and 
        // at most min(X, M) liars.
        // We need X-M > M => X > 2M.
        // So X = M + 1 is not enough if M > 0.
        // Let's re-check sample 1: N=2, M=1. 2M+1 = 3. Output is 3. Correct.
        // If N=1, M=2. 2M+1 = 5. But N+M = 3. 5 > 3, so impossible. Output -1. Correct.
        
        int X = M + 1 + M; // 2M + 1
        if (X <= N + M) {
            cout << X << "\n";
        } else {
            cout << -1 << "\n";
        }
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}