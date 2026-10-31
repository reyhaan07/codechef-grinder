#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total storage = S
 * Occupied storage = X + Y
 * Free storage = S - (X + Y)
 * Required storage = Z
 * 
 * If Free storage >= Z, we need to delete 0 apps.
 * Else if (Free storage + X >= Z) OR (Free storage + Y >= Z), we need to delete 1 app.
 * Else (Free storage + X + Y >= Z), we need to delete 2 apps.
 * 
 * Constraints:
 * S <= 500, X, Y, Z <= 500.
 * Time complexity: O(1) per test case.
 * Space complexity: O(1).
 */

void solve() {
    int S, X, Y, Z;
    cin >> S >> X >> Y >> Z;

    int free_memory = S - (X + Y);

    // Check if we can install without deleting any apps
    if (free_memory >= Z) {
        cout << 0 << "\n";
    } 
    // Check if we can install by deleting one app
    else if (free_memory + X >= Z || free_memory + Y >= Z) {
        cout << 1 << "\n";
    } 
    // Otherwise, we must delete both apps
    else {
        cout << 2 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}