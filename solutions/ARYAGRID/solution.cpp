#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Arya starts at (X0, Y0) and can jump exactly L units in any of the 4 cardinal directions.
 * This means Arya can reach any cell (x, y) such that:
 * x = X0 + k * L, where 1 <= x <= N
 * y = Y0 + m * L, where 1 <= y <= M
 * 
 * Since the jump is always L, the parity of the coordinate relative to the start
 * is fixed. Specifically, any reachable row x must satisfy (x - X0) % L == 0.
 * Similarly, any reachable column y must satisfy (y - Y0) % L == 0.
 * 
 * The set of reachable rows is {X0 + k*L | 1 <= X0 + k*L <= N}.
 * The set of reachable columns is {Y0 + m*L | 1 <= Y0 + m*L <= M}.
 * 
 * Let R be the number of reachable rows and C be the number of reachable columns.
 * The total number of reachable cells is R * C.
 * 
 * To find R:
 * The rows are X0, X0-L, X0-2L... and X0+L, X0+2L...
 * The smallest reachable row is X0 - floor((X0 - 1) / L) * L.
 * The largest reachable row is X0 + floor((N - X0) / L) * L.
 * The number of steps below X0 is floor((X0 - 1) / L).
 * The number of steps above X0 is floor((N - X0) / L).
 * Total rows R = floor((X0 - 1) / L) + floor((N - X0) / L) + 1.
 * 
 * Similarly for columns:
 * Total columns C = floor((Y0 - 1) / L) + floor((M - Y0) / L) + 1.
 */

void solve() {
    long long N, M, X0, Y0, L;
    if (!(cin >> N >> M >> X0 >> Y0 >> L)) return;

    long long rows_below = (X0 - 1) / L;
    long long rows_above = (N - X0) / L;
    long long total_rows = rows_below + rows_above + 1;

    long long cols_left = (Y0 - 1) / L;
    long long cols_right = (M - Y0) / L;
    long long total_cols = cols_left + cols_right + 1;

    long long ans = total_rows * total_cols;
    cout << ans << "\n";
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}