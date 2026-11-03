#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * In every 2 seconds (a cycle), the drunkard moves:
 * +3 steps (1st second)
 * -1 step (2nd second)
 * Net displacement per 2 seconds = 3 - 1 = 2 steps.
 * 
 * For a given k:
 * - If k is even, there are k/2 full cycles.
 *   Position = (k / 2) * 2 = k.
 * - If k is odd, there are (k-1)/2 full cycles plus one extra forward step.
 *   Position = ((k - 1) / 2) * 2 + 3 = (k - 1) + 3 = k + 2.
 * 
 * Constraints:
 * T <= 100,000
 * k <= 100,000
 * The logic is O(1) per test case, which is well within the time limit.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long k;
        cin >> k;
        
        if (k == 0) {
            cout << 0 << "\n";
        } else if (k % 2 == 0) {
            // Even seconds: k/2 cycles of +2 displacement
            cout << k << "\n";
        } else {
            // Odd seconds: (k-1)/2 cycles of +2 displacement + 3 forward
            cout << (k - 1) + 3 << "\n";
        }
    }
    
    return 0;
}