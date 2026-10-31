#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks for the total cost of Biryani classes.
 * Chef attends X weeks at a cost of Y coins per week.
 * Total cost = X * Y.
 * 
 * Constraints:
 * 1 <= T <= 10^4
 * 1 <= X, Y <= 100
 * The maximum possible value is 100 * 100 = 10,000.
 * This fits comfortably within a standard 32-bit integer, 
 * but using long long is good practice for competitive programming.
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        if (cin >> x >> y) {
            // Calculate total cost
            long long total_cost = x * y;
            // Output the result followed by a newline
            cout << total_cost << "\n";
        }
    }

    return 0;
}