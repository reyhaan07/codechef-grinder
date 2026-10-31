#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to reach stair X using moves of size Y or 1.
 * To minimize the number of moves, we should use the largest possible move (Y)
 * as many times as possible.
 * 
 * Let 'q' be the number of times we use the move of size Y.
 * q = X / Y (integer division)
 * The remaining distance is r = X % Y.
 * Since we can always take steps of size 1, we can cover the remaining 'r'
 * distance in 'r' moves of size 1.
 * 
 * Total moves = q + r
 * Total moves = (X / Y) + (X % Y)
 * 
 * Complexity:
 * Time: O(1) per test case, O(T) total.
 * Space: O(1).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Calculate number of moves using Y-sized jumps
        int moves_y = x / y;
        // Calculate remaining distance to be covered by 1-sized jumps
        int moves_one = x % y;

        // Total minimum moves
        int total_moves = moves_y + moves_one;

        cout << total_moves << "\n";
    }

    return 0;
}