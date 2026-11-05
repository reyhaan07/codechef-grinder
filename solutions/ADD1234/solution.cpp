#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have X pieces of 1, Y pieces of 2, and Z pieces of 3.
 * We want to form pairs that sum to 4.
 * Possible combinations to get 4:
 * 1. (1, 3): We can form min(X, Z) pairs.
 * 2. (2, 2): We can form Y / 2 pairs.
 * 
 * Total pairs = min(X, Z) + (Y / 2)
 * 
 * Constraints:
 * T <= 100, X, Y, Z <= 100.
 * The result will fit in a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        // Pairs of (1, 3)
        long long pairs13 = min(x, z);
        
        // Pairs of (2, 2)
        long long pairs22 = y / 2;

        long long total_pairs = pairs13 + pairs22;

        cout << total_pairs << "\n";
    }

    return 0;
}