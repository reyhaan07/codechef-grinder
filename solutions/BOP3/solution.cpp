#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a set S = {0, 1, 2, ..., N} where N is even.
 * We perform operations until only one element remains.
 * In each operation, we pick X, Y, add max(X, Y) to score, and add (X & Y) if not present.
 * 
 * Let's trace small values of N:
 * N=2: {0, 1, 2}. 
 *   Op: (1, 2) -> score 2, set {0, 0} -> {0}. Final score 2.
 * N=4: {0, 1, 2, 3, 4}.
 *   Op: (3, 4) -> score 4, set {0, 1, 2, 0} -> {0, 1, 2}.
 *   Op: (1, 2) -> score 4+2=6, set {0, 0} -> {0}. Final score 6.
 * N=6: {0, 1, 2, 3, 4, 5, 6}.
 *   Op: (5, 6) -> score 6, set {0, 1, 2, 3, 4, 4} -> {0, 1, 2, 3, 4}.
 *   Op: (3, 4) -> score 6+4=10, set {0, 1, 2, 0} -> {0, 1, 2}.
 *   Op: (1, 2) -> score 10+2=12, set {0, 0} -> {0}. Final score 12.
 * 
 * Pattern observed:
 * N=2: 2
 * N=4: 6
 * N=6: 12
 * N=8: 20
 * The sequence is 2, 6, 12, 20...
 * These are of the form k(k+1) where k = N/2.
 * Let's check:
 * N=2: 1*2 = 2.
 * N=4: 2*3 = 6.
 * N=6: 3*4 = 12.
 * N=8: 4*5 = 20.
 * 
 * The formula is (N/2) * (N/2 + 1).
 * Let's verify N=50:
 * (50/2) * (50/2 + 1) = 25 * 26 = 650.
 * This matches the sample output.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        
        // The pattern derived from the problem constraints and sample cases
        // is (N/2) * (N/2 + 1).
        long long k = n / 2;
        long long ans = k * (k + 1);
        
        cout << ans << "\n";
    }
    
    return 0;
}