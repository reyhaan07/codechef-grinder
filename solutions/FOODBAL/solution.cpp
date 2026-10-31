#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two dishes with fat (F) and protein (P) values.
 * We need to calculate the absolute difference |F - P| for both dishes.
 * Let diff1 = |F1 - P1|
 * Let diff2 = |F2 - P2|
 * 
 * If diff1 < diff2, output "First".
 * If diff2 < diff1, output "Second".
 * If diff1 == diff2, output "Both".
 * 
 * Constraints are small (up to 100), so standard integer types are sufficient.
 * Time complexity: O(1) per test case.
 * Space complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int f1, p1, f2, p2;
    // The problem description implies a single line of input for one scenario.
    // If the problem were to contain multiple test cases, it would specify 't'.
    // Based on the provided format, we read the four integers directly.
    if (cin >> f1 >> p1 >> f2 >> p2) {
        int diff1 = abs(f1 - p1);
        int diff2 = abs(f2 - p2);

        if (diff1 < diff2) {
            cout << "First" << "\n";
        } else if (diff2 < diff1) {
            cout << "Second" << "\n";
        } else {
            cout << "Both" << "\n";
        }
    }

    return 0;
}