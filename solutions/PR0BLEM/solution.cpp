#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let A be the number of problems Alice has and B be the number of problems Bob has.
 * 
 * Operation 1: Alice solves a problem.
 * A -> A - 1
 * B -> B + 1
 * The difference (A - B) changes by: (A - 1) - (B + 1) = A - B - 2.
 * 
 * Operation 2: Bob solves a problem.
 * A -> A + 3
 * B -> B - 1
 * The difference (A - B) changes by: (A + 3) - (B - 1) = A - B + 4.
 * 
 * Let D = A - B.
 * Operation 1 changes D by -2.
 * Operation 2 changes D by +4.
 * 
 * We want to reach a state where A = B, which means D = 0.
 * Starting from initial difference D_0 = N - M, we want to see if there exist
 * non-negative integers x (number of times Alice solves) and y (number of times Bob solves)
 * such that:
 * D_0 - 2x + 4y = 0
 * 2x - 4y = D_0
 * 2(x - 2y) = D_0
 * 
 * This implies that D_0 must be divisible by 2.
 * If (N - M) is even, then (N - M) / 2 = x - 2y.
 * Since we can choose x and y to be any non-negative integers (as long as we have 
 * enough problems to solve, but the problem implies we can solve problems as long 
 * as they exist), we just need to check if (N - M) is even.
 * 
 * Wait, let's re-verify:
 * If N - M is even, can we always reach 0?
 * If N - M = 2k:
 * If k > 0, we need 2x - 4y = 2k => x - 2y = k. We can pick y=0, x=k.
 * If k < 0, we need 2x - 4y = 2k => x - 2y = k => 2y - x = -k. We can pick x=0, y=-k/2 (if -k is even).
 * Actually, the condition is simply that the difference must be even.
 */

void solve() {
    long long N, M;
    cin >> N >> M;
    
    // The difference N - M changes by -2 or +4.
    // Both -2 and +4 are multiples of 2.
    // Therefore, the parity of (N - M) remains invariant modulo 2.
    // For the final state to be N' = M' (i.e., N' - M' = 0),
    // the initial difference (N - M) must be even.
    
    if ((N - M) % 2 == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}