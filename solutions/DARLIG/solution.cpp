#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Levels: 1, 2, 3 (On) -> 4 (Off)
 * Cycle: 1 -> 2 -> 3 -> 4 -> 1 ...
 * 
 * If K = 0 (Off):
 * The torch must be at level 4.
 * After N changes, the level becomes (4 + N - 1) % 4 + 1.
 * If N % 4 == 0, level is 4 (Off).
 * If N % 4 != 0, level is 1, 2, or 3 (On).
 * 
 * If K = 1 (On):
 * The torch could be at level 1, 2, or 3.
 * After N changes:
 * If N % 4 == 0, the levels remain {1, 2, 3}, which are all On. Result: On.
 * If N % 4 != 0, the levels shift. 
 * Example: N=1, K=1. Levels could be 1->2, 2->3, 3->4.
 * Resulting levels: {2, 3, 4}. Since 4 is Off and {2, 3} are On, it's Ambiguous.
 * 
 * Summary:
 * If K = 0:
 *    If N % 4 == 0: Off
 *    Else: On
 * If K = 1:
 *    If N % 4 == 0: On
 *    Else: Ambiguous
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        if (k == 0) {
            // Initially Off (Level 4)
            if (n % 4 == 0) {
                cout << "Off" << "\n";
            } else {
                cout << "On" << "\n";
            }
        } else {
            // Initially On (Levels 1, 2, 3)
            if (n % 4 == 0) {
                cout << "On" << "\n";
            } else {
                cout << "Ambiguous" << "\n";
            }
        }
    }

    return 0;
}