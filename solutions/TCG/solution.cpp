#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Capital Gain Tax
 * Logic: Compare the previous tax rate X with the new tax rate Y.
 * If Y > X, output INCREASED.
 * If Y < X, output DECREASED.
 * If Y == X, output SAME.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice often involves handling multiple
    // test cases if specified. Given the constraints and description, we read X and Y.
    long long X, Y;
    if (cin >> X >> Y) {
        if (Y > X) {
            cout << "INCREASED" << "\n";
        } else if (Y < X) {
            cout << "DECREASED" << "\n";
        } else {
            cout << "SAME" << "\n";
        }
    }

    return 0;
}