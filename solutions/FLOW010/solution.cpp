#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Id and Ship (FLOW010)
 * Logic: Read the character ID and map it to the corresponding ship class.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only store a single character per test case.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        char id;
        cin >> id;

        if (id == 'B' || id == 'b') {
            cout << "BattleShip" << "\n";
        } else if (id == 'C' || id == 'c') {
            cout << "Cruiser" << "\n";
        } else if (id == 'D' || id == 'd') {
            cout << "Destroyer" << "\n";
        } else if (id == 'F' || id == 'f') {
            cout << "Frigate" << "\n";
        }
    }

    return 0;
}