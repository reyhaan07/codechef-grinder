#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's car efficiency: 15 km per 1 liter of petrol.
 * Total distance to travel: 2 * Y (to DAIICT and back).
 * Petrol available: X liters.
 * Total distance the car can cover with X liters: X * 15 km.
 * 
 * Condition for success:
 * X * 15 >= 2 * Y
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= X, Y <= 1000
 * 
 * Data types:
 * X * 15 can be up to 15,000.
 * 2 * Y can be up to 2,000.
 * Both fit comfortably within a standard 32-bit integer, but using long long 
 * is a safe practice in competitive programming to prevent overflow.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Total distance required is 2 * Y
        // Total distance possible is X * 15
        if (x * 15 >= 2 * y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}