#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given X RTP courses (4 credits each), Y Audit courses (2 credits each),
 * and Z Non-RTP courses (0 credits each).
 * Total Credits = (X * 4) + (Y * 2) + (Z * 0)
 * 
 * Constraints:
 * 1 <= T <= 10
 * 1 <= X, Y, Z <= 10
 * The maximum possible value is (10 * 4) + (10 * 2) + (10 * 0) = 60.
 * This fits well within a standard integer, but we will use long long for safety.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long x, y, z;
        if (!(cin >> x >> y >> z)) break;

        // Calculate total credits based on the problem description
        long long total_credits = (x * 4) + (y * 2) + (z * 0);

        // Output the result
        cout << total_credits << "\n";
    }

    return 0;
}