#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers X and Y.
 * If X > Y, we output "FREEKICK".
 * If Y > X, we output "PENALTY".
 * The problem guarantees X != Y, so we don't need to handle the equality case.
 * Constraints are small (0 to 100), so standard int is sufficient.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice often involves reading until EOF
    // or handling a specific number of test cases. Given the description:
    // "The first and only line of input contains two space-separated integers X and Y"
    
    int X, Y;
    if (cin >> X >> Y) {
        if (X > Y) {
            cout << "FREEKICK" << "\n";
        } else {
            cout << "PENALTY" << "\n";
        }
    }

    return 0;
}