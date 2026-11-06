#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have initial scores A, B, C and M matches to play.
 * In each match, one player gets +1 point.
 * We want to know if there exists a distribution of M points such that
 * at least two players have the same final score.
 * 
 * Let the final scores be A', B', C'.
 * A' + B' + C' = A + B + C + M.
 * We want to check if (A' == B') or (B' == C') or (A' == C') is possible.
 * 
 * Since M is very small (up to 10), we can check the condition by considering
 * the difference between scores.
 * Two players can have the same score if the absolute difference between their 
 * initial scores is less than or equal to M.
 * Specifically, if we want A' == B', we need to distribute M points such that
 * A + x = B + y, where x + y <= M.
 * This simplifies to |A - B| <= M.
 * Wait, is it that simple?
 * Let's check:
 * If |A - B| <= M, we can give some points to A and some to B such that they become equal.
 * Let D = |A - B|. If D <= M, we can give D points to the player with the smaller score.
 * Now they have the same score. We have M - D points left.
 * If (M - D) is even, we can give (M - D)/2 to both, keeping them equal.
 * If (M - D) is odd, we can give the remaining point to the third player.
 * So, if |A - B| <= M, we can always make A and B equal.
 * 
 * Therefore, the condition is simply:
 * Is |A - B| <= M OR |B - C| <= M OR |A - C| <= M?
 */

void solve() {
    int A, B, C, M;
    cin >> A >> B >> C >> M;

    if (abs(A - B) <= M || abs(B - C) <= M || abs(A - C) <= M) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}