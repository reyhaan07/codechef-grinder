#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef makes cuts that pass through the center of the circular pizza.
 * - 0 cuts result in 1 piece.
 * - 1 cut results in 2 pieces.
 * - 2 cuts result in 4 pieces.
 * - 3 cuts result in 6 pieces.
 * - In general, k cuts result in 2*k pieces, except for the case of 0 cuts which results in 1 piece.
 * 
 * So, the possible number of pieces are:
 * 1 (0 cuts)
 * 2 (1 cut)
 * 4 (2 cuts)
 * 6 (3 cuts)
 * ...
 * 2*k (k cuts)
 * 
 * This means N is valid if:
 * 1. N == 1
 * 2. N is even (N % 2 == 0)
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Check if N is 1 or an even number
        if (n == 1 || (n % 2 == 0)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}