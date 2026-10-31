#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N bottles, each of capacity X.
 * Total water available is K.
 * We need to find the maximum number of bottles that can be filled completely.
 * 
 * 1. The number of bottles that can be filled by the water available is floor(K / X).
 * 2. However, Chef only has N bottles available.
 * 3. Therefore, the number of bottles filled cannot exceed N.
 * 4. The answer is min(N, K / X).
 * 
 * Constraints:
 * N, X, K up to 10^5. The result will fit in a standard integer.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x, k;
        cin >> n >> x >> k;

        // If capacity is 0, we cannot fill any bottles (though constraints say X >= 1)
        if (x == 0) {
            cout << 0 << "\n";
            continue;
        }

        // Calculate how many bottles can be filled with K water
        long long bottles_by_water = k / x;

        // The answer is the minimum of available bottles and bottles possible by water
        long long result = min(n, bottles_by_water);

        cout << result << "\n";
    }

    return 0;
}