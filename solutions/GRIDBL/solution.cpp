#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have an N x M grid. We want to cover it with 2x2 tiles and 1x1 tiles.
 * To minimize 1x1 tiles, we should maximize the use of 2x2 tiles.
 * 
 * A 2x2 tile covers 2 rows and 2 columns.
 * If N is even and M is even, we can cover the entire grid with 2x2 tiles (0 tiles of 1x1).
 * If N is odd and M is even, we will have one row left over (M cells). Since M is even, 
 * we can cover these M cells with 1x2 tiles (not allowed) or 1x1 tiles. 
 * Actually, if N is odd, we have a row of length M. If M is even, we need M 1x1 tiles.
 * If N is even and M is odd, we have a column of length N. We need N 1x1 tiles.
 * If N is odd and M is odd, we have a row of length M and a column of length N, 
 * and one corner cell (1x1) that is shared.
 * 
 * Mathematically:
 * - If N % 2 == 0 and M % 2 == 0: 0 tiles of 1x1.
 * - If N % 2 != 0 and M % 2 == 0: M tiles of 1x1.
 * - If N % 2 == 0 and M % 2 != 0: N tiles of 1x1.
 * - If N % 2 != 0 and M % 2 != 0: N + M - 1 tiles of 1x1.
 * 
 * This can be simplified:
 * The number of 1x1 tiles is (N % 2) * M + (M % 2) * N - (N % 2 * M % 2).
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long ans = 0;
        if (n % 2 == 0 && m % 2 == 0) {
            ans = 0;
        } else if (n % 2 != 0 && m % 2 == 0) {
            ans = m;
        } else if (n % 2 == 0 && m % 2 != 0) {
            ans = n;
        } else {
            // Both odd
            ans = n + m - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}