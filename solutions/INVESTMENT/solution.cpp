#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * An investment is "good" if X >= 2 * Y.
 * Constraints: 1 <= T <= 400, 1 <= X, Y <= 20.
 * Since X and Y are small, standard integer types are sufficient.
 * Time Complexity: O(T) per test suite.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int x, y;
        cin >> x >> y;

        // Check the condition: interest rate (X) is at least twice the inflation rate (Y)
        if (x >= 2 * y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}