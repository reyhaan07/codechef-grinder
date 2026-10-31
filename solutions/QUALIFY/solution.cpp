#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Easy problems are worth 1 point.
 * Hard problems are worth 2 points.
 * Total score = (A * 1) + (B * 2).
 * Qualification condition: Total score >= X.
 * 
 * Constraints:
 * T <= 100, X, A, B <= 100.
 * The maximum possible score is 100 * 1 + 100 * 2 = 300.
 * This fits comfortably within a standard 32-bit integer, 
 * but we use long long as a best practice for competitive programming.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long x, a, b;
        cin >> x >> a >> b;

        // Calculate total score
        long long total_score = (a * 1) + (b * 2);

        // Check qualification condition
        if (total_score >= x) {
            cout << "Qualify" << "\n";
        } else {
            cout << "NotQualify" << "\n";
        }
    }

    return 0;
}