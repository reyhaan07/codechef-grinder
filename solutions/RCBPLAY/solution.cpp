#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * RCB currently has X points.
 * They need at least Y points.
 * They have Z games remaining.
 * In each game, they can earn a maximum of 2 points (a win).
 * Therefore, the maximum additional points they can earn is 2 * Z.
 * The maximum total points they can reach is X + (2 * Z).
 * 
 * Condition for qualification:
 * X + 2 * Z >= Y
 * 
 * Constraints:
 * T <= 5000
 * 0 <= X, Y, Z <= 1000
 * All values fit within standard integer types, but using long long is safe.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Calculate maximum possible points
        long long max_points = x + (2 * z);
        
        // Check if the target Y is reachable
        if (max_points >= y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}