#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is at (sx, sy) and wants to reach (ex, ey).
 * A move is valid if the new row != current row AND new column != current column.
 * 
 * Case 1: If sx != ex AND sy != ey, Chef can reach the destination in 1 move.
 * Case 2: If sx == ex OR sy == ey, Chef cannot reach the destination in 1 move 
 *         because the condition (a != c AND b != d) would be violated.
 *         However, Chef can always reach the destination in 2 moves by picking 
 *         an intermediate cell (r, c) such that r != sx, r != ex, c != sy, and c != ey.
 *         Since the grid is 10x10, such an intermediate cell always exists.
 */

void solve() {
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;

    // If the starting and ending cells are different, check the conditions.
    // If both row and column are different, it takes 1 move.
    if (sx != ex && sy != ey) {
        cout << 1 << "\n";
    } else {
        // If either row or column is the same, it takes 2 moves.
        cout << 2 << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}