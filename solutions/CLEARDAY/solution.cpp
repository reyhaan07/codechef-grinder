#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A week consists of 7 days.
 * Given X rainy days and Y cloudy days, the number of clear days is 7 - (X + Y).
 * Constraints: 0 <= X, Y <= 7 and 0 <= X + Y <= 7.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    // The problem description implies a single line of input for X and Y.
    // If there were multiple test cases, the problem would specify a 't'.
    // Based on the provided format, we read X and Y once.
    if (cin >> x >> y) {
        int clear_days = 7 - (x + y);
        cout << clear_days << "\n";
    }

    return 0;
}