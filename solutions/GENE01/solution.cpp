#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states:
 * 1. Brown (R) is the most common.
 * 2. Blue (B) is the second most common.
 * 3. Green (G) is the rarest.
 * 
 * The child's eye color is the most common of the two parents.
 * Hierarchy: R > B > G.
 * 
 * Logic:
 * If either parent is 'R', the child is 'R'.
 * Else if either parent is 'B', the child is 'B'.
 * Else (both are 'G'), the child is 'G'.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char p1, p2;
    if (!(cin >> p1 >> p2)) return 0;

    // Determine the dominant color based on the hierarchy R > B > G
    if (p1 == 'R' || p2 == 'R') {
        cout << "R" << "\n";
    } else if (p1 == 'B' || p2 == 'B') {
        cout << "B" << "\n";
    } else {
        // Both must be 'G'
        cout << "G" << "\n";
    }

    return 0;
}