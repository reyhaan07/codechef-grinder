#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Conditions:
 * C1: Hardness > 50
 * C2: Carbon content < 0.7
 * C3: Tensile strength > 5600
 * 
 * Grading:
 * Grade 10: C1, C2, and C3 are true.
 * Grade 9: C1 and C2 are true.
 * Grade 8: C2 and C3 are true.
 * Grade 7: C1 and C3 are true.
 * Grade 6: Only one condition is true.
 * Grade 5: None of the conditions are true.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        double h, c, ts;
        cin >> h >> c >> ts;

        bool c1 = (h > 50);
        bool c2 = (c < 0.7);
        bool c3 = (ts > 5600);

        int count = (c1 ? 1 : 0) + (c2 ? 1 : 0) + (c3 ? 1 : 0);

        if (c1 && c2 && c3) {
            cout << 10 << "\n";
        } else if (c1 && c2) {
            cout << 9 << "\n";
        } else if (c2 && c3) {
            cout << 8 << "\n";
        } else if (c1 && c3) {
            cout << 7 << "\n";
        } else if (count == 1) {
            cout << 6 << "\n";
        } else {
            cout << 5 << "\n";
        }
    }

    return 0;
}