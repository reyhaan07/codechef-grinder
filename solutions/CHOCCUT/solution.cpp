#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have an N x M chocolate bar. We need to divide it into 2 equal pieces
 * by making a cut along a grid line.
 * 
 * A cut can be made horizontally or vertically.
 * 1. If we cut horizontally, we split the N rows into two parts of size k and (N-k).
 *    For the pieces to be equal, the area must be equal: k * M = (N - k) * M.
 *    This implies k = N - k, or 2k = N. Thus, N must be even.
 * 2. If we cut vertically, we split the M columns into two parts of size k and (M-k).
 *    For the pieces to be equal, the area must be equal: N * k = N * (M - k).
 *    This implies k = M - k, or 2k = M. Thus, M must be even.
 * 
 * Therefore, it is possible to divide the chocolate into 2 equal pieces if and only if
 * N is even OR M is even.
 * 
 * Exception: If N=1 and M=1, the total area is 1. We cannot divide 1 into two 
 * equal integer-area pieces. The condition (N is even or M is even) correctly 
 * handles this because 1 is odd, so it returns "No".
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        // Check if either dimension is even.
        // If N is even, we can cut horizontally at N/2.
        // If M is even, we can cut vertically at M/2.
        if (n % 2 == 0 || m % 2 == 0) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}