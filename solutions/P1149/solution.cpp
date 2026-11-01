#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Approximate Answer
 * The problem asks to check if |X - Y| <= K.
 * Given constraints are small (1 <= X, Y, K <= 20), so standard integer types are sufficient.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y, K;
    // The problem description implies a single line of input for one test case.
    // If there were multiple test cases, we would wrap this in a loop.
    if (cin >> X >> Y >> K) {
        // Calculate absolute difference
        long long diff = abs(X - Y);

        // Check condition |X - Y| <= K
        if (diff <= K) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}