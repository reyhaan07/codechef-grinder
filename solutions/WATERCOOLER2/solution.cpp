#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to find the maximum integer M such that:
 * M * X < Y
 * 
 * Rearranging the inequality:
 * M < Y / X
 * 
 * Since M must be an integer, M = floor((Y - 1) / X).
 * If Y <= X, then Y/X is less than 1, so M = 0.
 * 
 * Constraints:
 * X, Y up to 10^9. The result M will also be at most 10^9.
 * Using long long is safe to prevent any potential overflow during calculations,
 * though standard integer division handles this logic correctly.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        // If renting for 1 month is already >= purchasing, 
        // Chef should not rent at all.
        if (x >= y) {
            cout << 0 << "\n";
        } else {
            // We want the largest integer M such that M * X < Y.
            // This is equivalent to M = (Y - 1) / X using integer division.
            long long ans = (y - 1) / x;
            cout << ans << "\n";
        }
    }

    return 0;
}