#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The ball is considered 'IN' if and only if all 4 referees agree it is inside.
 * The input uses 0 for 'IN' and 1 for 'OUT'.
 * Therefore, the ball is 'IN' if and only if R1 == 0 AND R2 == 0 AND R3 == 0 AND R4 == 0.
 * If any referee provides a 1, the ball is 'OUT'.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int r1, r2, r3, r4;
        cin >> r1 >> r2 >> r3 >> r4;

        // Check if all referees agree the ball is inside (all values are 0)
        if (r1 == 0 && r2 == 0 && r3 == 0 && r4 == 0) {
            cout << "IN" << "\n";
        } else {
            cout << "OUT" << "\n";
        }
    }

    return 0;
}