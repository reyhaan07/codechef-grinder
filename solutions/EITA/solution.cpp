#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Strategy 1: Chef does x units of work every day for 7 days.
 * Total work = 7 * x
 * 
 * Strategy 2: Chef does y units of work for d days and z units for (7 - d) days.
 * Total work = (y * d) + (z * (7 - d))
 * 
 * We need to output max(Strategy 1, Strategy 2).
 * 
 * Constraints:
 * T <= 5000
 * 1 <= d < 7
 * 1 <= z < x < y <= 18
 * 
 * Since the values are very small, standard integer types are sufficient.
 * Time complexity per test case: O(1)
 * Total time complexity: O(T)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        
        // Strategy 1 calculation
        int strategy1 = 7 * x;
        
        // Strategy 2 calculation
        int strategy2 = (y * d) + (z * (7 - d));
        
        // Output the maximum of the two strategies
        cout << max(strategy1, strategy2) << "\n";
    }
    
    return 0;
}