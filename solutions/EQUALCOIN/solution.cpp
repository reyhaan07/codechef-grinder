#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total value = X * 1 + Y * 2 = X + 2Y.
 * For the total value to be split equally, (X + 2Y) must be even.
 * Since 2Y is always even, X must be even for the total sum to be even.
 * 
 * Case 1: X is odd.
 * If X is odd, the total sum (X + 2Y) is odd. It is impossible to split an odd sum into two equal integer parts.
 * Result: NO.
 * 
 * Case 2: X is even.
 * If X is even, the total sum is even. We need to check if we can form half the sum (X/2 + Y) using the available coins.
 * Let the target sum be S = (X + 2Y) / 2.
 * If X > 0, we can always use the 1-rupee coins to fill gaps.
 * If X == 0, we can only split the sum if Y is even (so each son gets Y/2 coins of value 2).
 * If X == 0 and Y is odd, we cannot split the sum.
 * 
 * Combining these:
 * 1. If X is odd, output NO.
 * 2. If X is even:
 *    a. If X > 0, we can always distribute (since we can use 1-rupee coins to balance).
 *    b. If X == 0, we need Y to be even to split the 2-rupee coins equally.
 */

void solve() {
    long long X, Y;
    cin >> X >> Y;

    // Total value must be even
    if ((X + 2 * Y) % 2 != 0) {
        cout << "NO" << "\n";
        return;
    }

    // If X is 0, we can only split if Y is even
    if (X == 0) {
        if (Y % 2 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    } else {
        // If X > 0 and total sum is even, we can always distribute
        cout << "YES" << "\n";
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