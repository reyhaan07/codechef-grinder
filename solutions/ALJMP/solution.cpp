#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The frog starts at position N.
 * Jump 1 (odd): Left by (N-1) -> Pos = N - (N-1) = 1
 * Jump 2 (even): Right by (N-2) -> Pos = 1 + (N-2) = N-1
 * Jump 3 (odd): Left by (N-3) -> Pos = (N-1) - (N-3) = 2
 * Jump 4 (even): Right by (N-4) -> Pos = 2 + (N-4) = N-2
 * Jump 5 (odd): Left by (N-5) -> Pos = (N-2) - (N-5) = 3
 * Jump 6 (even): Right by (N-6) -> Pos = 3 + (N-6) = N-3
 * 
 * Pattern observation:
 * After 1 jump: 1
 * After 2 jumps: N-1
 * After 3 jumps: 2
 * After 4 jumps: N-2
 * After 5 jumps: 3
 * After 6 jumps: N-3
 * 
 * Let k be the number of jumps.
 * If k is odd, position = (k+1)/2
 * If k is even, position = N - (k/2)
 * 
 * Total jumps = N-1.
 * If N-1 is odd (N is even):
 *   Final position = ((N-1)+1)/2 = N/2
 * If N-1 is even (N is odd):
 *   Final position = N - ((N-1)/2) = (2N - N + 1) / 2 = (N+1)/2
 * 
 * Summary:
 * If N is even, result is N/2.
 * If N is odd, result is (N+1)/2.
 * This can be simplified to (N + 1) / 2 using integer division.
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
        
        // Based on the derived formula:
        // For N=2: (2+1)/2 = 1
        // For N=3: (3+1)/2 = 2
        // For N=5: (5+1)/2 = 3
        // For N=6: (6+1)/2 = 3
        // The formula (N + 1) / 2 holds for all N >= 2.
        
        long long ans = (n + 1) / 2;
        cout << ans << "\n";
    }
    return 0;
}