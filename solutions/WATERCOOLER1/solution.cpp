#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Renting cost = X * M
 * Purchasing cost = Y
 * Chef rents if (X * M) < Y.
 * 
 * Constraints:
 * X, M <= 10^4, so X * M <= 10^8.
 * Y <= 10^8.
 * Using long long for the calculation is safe to prevent any potential overflow,
 * although standard 32-bit int would technically suffice for 10^8.
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, m;
        cin >> x >> y >> m;
        
        // Calculate total renting cost
        long long total_renting_cost = x * m;
        
        // Check if renting is strictly cheaper than purchasing
        if (total_renting_cost < y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}