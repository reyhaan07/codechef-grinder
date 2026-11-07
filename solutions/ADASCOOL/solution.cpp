#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have an N x M grid. Each student at (r, c) must move to an adjacent cell (r', c').
 * This is equivalent to finding a perfect matching in the grid graph where every 
 * vertex is matched with an adjacent vertex.
 * 
 * A grid graph is a bipartite graph. A perfect matching exists if and only if 
 * the total number of vertices (N * M) is even and the graph satisfies Hall's 
 * Marriage Theorem conditions.
 * 
 * Specifically for a grid:
 * 1. If N * M is odd, it is impossible to have a perfect matching because 
 *    the number of black and white cells in a checkerboard coloring will differ by 1.
 * 2. If N * M is even, at least one of N or M must be even. If at least one 
 *    dimension is even, we can tile the grid with 1x2 or 2x1 dominoes. Each 
 *    domino represents a pair of adjacent cells where students can swap places.
 * 
 * Therefore, the condition is simply: (N * M) % 2 == 0, which is equivalent 
 * to saying (N is even OR M is even).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, m;
        cin >> n >> m;

        // If either N or M is even, the total number of cells is even,
        // and we can partition the grid into dominoes (1x2 or 2x1).
        // Each domino allows the two students to swap positions.
        if (n % 2 == 0 || m % 2 == 0) {
            cout << "YES" << "\n";
        } else {
            // If both N and M are odd, N*M is odd.
            // A grid with an odd number of cells cannot have a perfect matching.
            cout << "NO" << "\n";
        }
    }

    return 0;
}