#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A problem setter is an expert if (Y / X) * 100 >= 50.
 * This simplifies to Y / X >= 0.5.
 * To avoid floating point precision issues, we can multiply both sides by 2 * X:
 * 2 * Y >= X.
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= Y <= X <= 10^6
 * Since X and Y are up to 10^6, 2 * Y will be at most 2 * 10^6, 
 * which fits comfortably within a standard 32-bit signed integer.
 * Using long long is safe practice to prevent overflow in more complex scenarios.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Check if at least 50% of problems are approved.
        // 2 * Y >= X is equivalent to Y/X >= 0.5
        if (2 * y >= x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}