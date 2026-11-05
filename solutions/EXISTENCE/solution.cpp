#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The given equation is: X^4 + 4 * Y^2 = 4 * X^2 * Y
 * Rearranging the terms:
 * X^4 - 4 * X^2 * Y + 4 * Y^2 = 0
 * This is a perfect square trinomial of the form (a - b)^2 = 0, where:
 * a = X^2
 * b = 2 * Y
 * So, (X^2 - 2 * Y)^2 = 0
 * This implies X^2 - 2 * Y = 0, or X^2 = 2 * Y.
 * 
 * Given constraints:
 * X <= 10^9, Y <= 10^18
 * X^2 can be up to 10^18, which fits in a 64-bit integer (long long).
 * 2 * Y can be up to 2 * 10^18, which also fits in a 64-bit integer (long long).
 * Therefore, we can simply check if X * X == 2 * Y.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        // Check if X^2 == 2 * Y
        // Using long long to prevent overflow as X^2 max is 10^18
        if (x * x == 2 * y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}