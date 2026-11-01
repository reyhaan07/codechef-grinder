#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Initial ice cream: X
 * Melting rate: Y grams per minute
 * Time elapsed: N minutes
 * Total melted: Y * N
 * Remaining ice cream: X - (Y * N)
 * Constraint: If X - (Y * N) < 0, the ice cream is gone, so the result is 0.
 * Therefore, the result is max(0, X - Y * N).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        // Calculate total melted amount
        long long melted = y * n;
        
        // Calculate remaining amount
        long long remaining = x - melted;

        // If remaining is negative, it means all ice cream melted
        if (remaining < 0) {
            cout << 0 << "\n";
        } else {
            cout << remaining << "\n";
        }
    }

    return 0;
}