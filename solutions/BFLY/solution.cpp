#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have R red, G green, and B blue butterflies and flowers.
 * Each butterfly must feed on a flower of a different color.
 * Let the total number of butterflies be N = R + G + B.
 * 
 * A butterfly of color X cannot feed on a flower of color X.
 * This is equivalent to saying that the maximum number of butterflies of any 
 * single color must not exceed the sum of the number of flowers of the other two colors.
 * 
 * Specifically:
 * 1. Red butterflies (R) must feed on Green or Blue flowers.
 *    Total available non-red flowers = G + B.
 *    Therefore, R <= G + B.
 * 2. Green butterflies (G) must feed on Red or Blue flowers.
 *    Total available non-green flowers = R + B.
 *    Therefore, G <= R + B.
 * 3. Blue butterflies (B) must feed on Red or Green flowers.
 *    Total available non-blue flowers = R + G.
 *    Therefore, B <= R + G.
 * 
 * If these three conditions are met, it is always possible to construct a valid 
 * matching (this is a known result related to Hall's Marriage Theorem or 
 * flow networks for this specific constraint).
 */

void solve() {
    long long R, G, B;
    if (!(cin >> R >> G >> B)) return;

    // Check the conditions derived from the pigeonhole principle/matching theory
    if (R <= G + B && G <= R + B && B <= R + G) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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