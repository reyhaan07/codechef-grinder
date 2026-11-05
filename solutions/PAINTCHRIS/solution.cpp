#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each wall has dimensions X * Y.
 * Area of one wall = X * Y (m^2).
 * Cost per m^2 = 2 rupees.
 * Cost to paint one wall = (X * Y) * 2 rupees.
 * Total budget = Z rupees.
 * 
 * We need to find the maximum number of walls that can be painted completely.
 * This is equivalent to floor(Z / Cost_per_wall).
 * 
 * Constraints:
 * T <= 10^4
 * X, Y <= 10
 * Z <= 100
 * 
 * Since X*Y*2 will be at most 10*10*2 = 200, and Z is at most 100, 
 * standard integer types are sufficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Calculate area of one wall
        long long area = x * y;
        
        // Calculate cost to paint one wall
        long long cost_per_wall = area * 2;
        
        // Calculate maximum number of walls that can be painted completely
        // If cost_per_wall is 0 (not possible by constraints), handle gracefully
        if (cost_per_wall == 0) {
            cout << 0 << "\n";
        } else {
            long long max_walls = z / cost_per_wall;
            cout << max_walls << "\n";
        }
    }
    
    return 0;
}