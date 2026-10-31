#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has a goal X.
 * If Y <= X, he earns 1 rupee per chocolate, total = Y.
 * If Y > X, he earns 1 rupee for the first X chocolates, 
 * and 2 rupees for each of the (Y - X) extra chocolates.
 * Total = X + (Y - X) * 2.
 * 
 * Constraints: 1 <= X, Y <= 10.
 * The values are small, so standard integer types are sufficient.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (y <= x) {
            // Case where goal is met or not met
            cout << y << "\n";
        } else {
            // Case where goal is exceeded
            // First X chocolates earn 1 rupee each (Total X)
            // Remaining (Y - X) chocolates earn 2 rupees each
            long long total = x + (y - x) * 2;
            cout << total << "\n";
        }
    }

    return 0;
}