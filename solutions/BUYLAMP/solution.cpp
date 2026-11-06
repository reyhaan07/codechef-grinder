#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to buy exactly N lamps.
 * At least K lamps must be red.
 * Red lamp cost = X, Blue lamp cost = Y.
 * 
 * To minimize the total cost:
 * 1. We must buy at least K red lamps. Since we want to minimize cost, 
 *    we should buy exactly K red lamps if X > Y, or as many as possible 
 *    if X is cheaper. However, the constraint is "at least K".
 * 2. If X <= Y, it is always optimal to buy as many red lamps as possible 
 *    (up to N) because they are cheaper or equal in price.
 * 3. If X > Y, we should buy exactly K red lamps to satisfy the condition, 
 *    and the remaining (N - K) lamps should be blue because they are cheaper.
 * 
 * Logic:
 * - Buy K red lamps. Cost = K * X.
 * - Remaining lamps = N - K.
 * - For the remaining lamps, we choose the cheaper option between X and Y.
 * - Total cost = (K * X) + (N - K) * min(X, Y).
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k, x, y;
        cin >> n >> k >> x >> y;

        // We must buy at least K red lamps.
        // The cost for the first K lamps is K * X.
        // For the remaining (N - K) lamps, we pick the cheaper of the two.
        long long cost = (k * x) + (n - k) * min(x, y);
        
        cout << cost << "\n";
    }

    return 0;
}