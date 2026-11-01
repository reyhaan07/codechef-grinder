#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * There are 10 problems in total.
 * Each problem is worth either 1 or 100 points.
 * Let 'x' be the number of problems worth 100 points.
 * Let 'y' be the number of problems worth 1 point.
 * Total problems: x + y <= 10
 * Total score: P = 100 * x + 1 * y
 * 
 * From the equations:
 * x = P / 100 (integer division)
 * y = P % 100
 * 
 * Constraints:
 * 1. x + y <= 10
 * 2. x >= 0, y >= 0
 * 3. Since there are only 10 problems, x can be at most 10.
 * 
 * If x + y <= 10, then the number of problems solved is x + y.
 * Otherwise, the score is invalid, output -1.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int p;
        cin >> p;

        int x = p / 100; // Number of 100-point problems
        int y = p % 100; // Number of 1-point problems

        // Check if the total number of problems solved is within the limit of 10
        if (x + y <= 10) {
            cout << (x + y) << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}