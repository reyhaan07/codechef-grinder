#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The resolution passes if X >= N / 2.0.
 * To avoid floating point arithmetic, we can multiply both sides by 2:
 * 2 * X >= N
 * 
 * Constraints:
 * T <= 5000
 * N <= 100
 * X <= N
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, x;
        cin >> n >> x;

        // The condition "half or more than half" means X >= N/2.0
        // Which is equivalent to 2 * X >= N
        if (2 * x >= n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}