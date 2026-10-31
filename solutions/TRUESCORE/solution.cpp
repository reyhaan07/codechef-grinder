#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The score can change from A:B to C:D if and only if the number of goals 
 * for each team does not decrease.
 * That is, team 1 must have scored at least A goals (C >= A) 
 * and team 2 must have scored at least B goals (D >= B).
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few integer variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;

        // Check if the final score is reachable from the initial score
        // A score is reachable if C >= A and D >= B
        if (c >= a && d >= b) {
            cout << "POSSIBLE" << "\n";
        } else {
            cout << "IMPOSSIBLE" << "\n";
        }
    }

    return 0;
}