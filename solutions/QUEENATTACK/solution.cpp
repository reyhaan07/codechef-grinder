#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A Queen at (X, Y) on an N x N board attacks:
 * 1. Horizontal: All cells in row X except (X, Y). Total: N - 1
 * 2. Vertical: All cells in column Y except (X, Y). Total: N - 1
 * 3. Main Diagonal (top-left to bottom-right):
 *    Cells (r, c) where r - c = X - Y.
 *    Number of cells = min(X-1, Y-1) + min(N-X, N-Y)
 * 4. Anti-Diagonal (top-right to bottom-left):
 *    Cells (r, c) where r + c = X + Y.
 *    Number of cells = min(X-1, N-Y) + min(N-X, Y-1)
 * 
 * Total = (N-1) + (N-1) + min(X-1, Y-1) + min(N-X, N-Y) + min(X-1, N-Y) + min(N-X, Y-1)
 */

void solve() {
    long long N, X, Y;
    cin >> N >> X >> Y;

    // Horizontal and Vertical attacks
    long long horizontal_vertical = (N - 1) + (N - 1);

    // Main diagonal (top-left to bottom-right)
    // Cells above-left: min(X-1, Y-1)
    // Cells below-right: min(N-X, N-Y)
    long long main_diag = min(X - 1, Y - 1) + min(N - X, N - Y);

    // Anti-diagonal (top-right to bottom-left)
    // Cells above-right: min(X-1, N-Y)
    // Cells below-left: min(N-X, Y-1)
    long long anti_diag = min(X - 1, N - Y) + min(N - X, Y - 1);

    cout << horizontal_vertical + main_diag + anti_diag << "\n";
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