#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers X (old runtime) and Y (new runtime).
 * - If X < Y, the old system is faster (smaller time means faster).
 * - If Y < X, the new system is faster.
 * - If X == Y, they are the same.
 * 
 * Constraints: 1 <= X, Y <= 3000.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice often involves handling multiple
    // test cases if specified. Given the constraints and format:
    int X, Y;
    if (cin >> X >> Y) {
        if (X < Y) {
            cout << "Old" << "\n";
        } else if (Y < X) {
            cout << "New" << "\n";
        } else {
            cout << "Same" << "\n";
        }
    }

    return 0;
}