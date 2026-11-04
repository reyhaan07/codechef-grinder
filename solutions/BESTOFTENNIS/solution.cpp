#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let the final score be (X, Y).
 * The total number of sets played is S = X + Y.
 * The winner is the one with the higher score. Let M = max(X, Y) and m = min(X, Y).
 * The match stops when the loser cannot catch up even if they win all remaining sets.
 * Let N be the total number of sets in the "best of N" match.
 * The number of remaining sets is R = N - S.
 * The condition for stopping is: m + R < M.
 * Substituting R: m + (N - S) < M
 * N < M - m + S
 * Since S = M + m, we have:
 * N < M - m + M + m
 * N < 2 * M
 * Also, the match must have reached at least S sets, so N >= S.
 * Since N must be odd, we look for the largest odd integer N such that N < 2 * M.
 * 
 * Let's verify with examples:
 * 1) 2 5: M=5, m=2. N < 2*5 = 10. Largest odd < 10 is 9. Correct.
 * 2) 8 10: M=10, m=8. N < 2*10 = 20. Largest odd < 20 is 19. Correct.
 * 3) 99 1: M=99, m=1. N < 2*99 = 198. Largest odd < 198 is 197. Correct.
 * 4) 4 8: M=8, m=4. N < 2*8 = 16. Largest odd < 16 is 15. Correct.
 * 
 * Formula: N = 2 * max(X, Y) - 1.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        long long m = max(x, y);
        long long n = 2 * m - 1;
        
        cout << n << "\n";
    }
    
    return 0;
}