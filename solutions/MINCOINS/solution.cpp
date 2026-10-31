#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have denominations of 5 and 10.
 * 1. If X is not divisible by 5, it is impossible to form the sum. Output -1.
 * 2. If X is divisible by 5, we want to minimize the number of coins.
 *    Since 10 is larger than 5, we should use as many 10-rupee coins as possible.
 *    - If X is divisible by 10, the minimum coins = X / 10.
 *    - If X is not divisible by 10 (but is divisible by 5), we use (X / 10) coins of 10 rupees,
 *      and the remaining 5 rupees will be covered by exactly one 5-rupee coin.
 *      Total coins = (X / 10) + 1.
 * 
 * Complexity:
 * Time: O(1) per test case, O(T) total.
 * Space: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        // If X is not divisible by 5, it's impossible to pay
        if (x % 5 != 0) {
            cout << -1 << "\n";
        } else {
            // If divisible by 10, use only 10-rupee coins
            if (x % 10 == 0) {
                cout << x / 10 << "\n";
            } else {
                // If divisible by 5 but not 10, use (X/10) 10-rupee coins 
                // and one 5-rupee coin.
                cout << (x / 10) + 1 << "\n";
            }
        }
    }

    return 0;
}