#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's work takes x units of time.
 * Due to laziness, he takes m * x units of time.
 * However, there is a limit to the delay: he can delay the work by at most d units.
 * This means the total time taken is capped at x + d.
 * Therefore, the time taken is min(m * x, x + d).
 * 
 * Constraints:
 * 1 <= T <= 10^4
 * 1 <= x, m <= 10
 * 0 <= d < 100
 * The values are small enough that standard integer types are sufficient, 
 * but using long long is good practice for competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, m, d;
        cin >> x >> m >> d;
        
        // Calculate the time taken by laziness: m * x
        // Calculate the maximum allowed time: x + d
        // The result is the minimum of these two values
        long long time_taken = min(m * x, x + d);
        
        cout << time_taken << "\n";
    }
    
    return 0;
}