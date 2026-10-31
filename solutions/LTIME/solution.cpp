#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's lunchtime is between 1 pm and 4 pm inclusive.
 * Given an integer X representing the time in pm, we need to check if 1 <= X <= 4.
 * 
 * Constraints:
 * 1 <= T <= 12
 * 1 <= X <= 12
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int x;
        cin >> x;

        // Check if X is within the range [1, 4]
        if (x >= 1 && x <= 4) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}