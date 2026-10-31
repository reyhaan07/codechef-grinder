#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The bus has 100 seats.
 * Exit 1 is at seat 1.
 * Exit 2 is at seat 100.
 * Distance to Exit 1 = |X - 1| = X - 1
 * Distance to Exit 2 = |X - 100| = 100 - X
 * 
 * If (X - 1) < (100 - X), the passenger chooses LEFT.
 * If (X - 1) >= (100 - X), the passenger chooses RIGHT.
 * 
 * Simplifying the condition:
 * X - 1 < 100 - X
 * 2X < 101
 * X < 50.5
 * 
 * So, if X <= 50, the passenger chooses LEFT.
 * If X > 50, the passenger chooses RIGHT.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x;
        cin >> x;
        
        // Based on the logic derived:
        // Distance to left exit: x - 1
        // Distance to right exit: 100 - x
        // If x - 1 < 100 - x, go LEFT.
        // If x - 1 >= 100 - x, go RIGHT.
        
        if (x <= 50) {
            cout << "LEFT" << "\n";
        } else {
            cout << "RIGHT" << "\n";
        }
    }

    return 0;
}