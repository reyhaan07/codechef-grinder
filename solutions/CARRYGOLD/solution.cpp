#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total number of people = N + 1 (Chef + N friends).
 * Each person can carry at most Y kg.
 * Total capacity = (N + 1) * Y.
 * We need to check if total capacity >= X.
 * 
 * Constraints:
 * N, X, Y <= 1000.
 * (N + 1) * Y can be at most 1001 * 1000 = 1,001,000.
 * This fits comfortably within a standard 32-bit integer, 
 * but using long long is safer practice for competitive programming.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        // Total capacity is (number of people) * (capacity per person)
        long long total_capacity = (n + 1) * y;

        if (total_capacity >= x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}