#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs C chocolates in total.
 * Chef already has X chocolates.
 * Number of chocolates to buy = C - X.
 * Cost per chocolate = Y.
 * Total cost = (C - X) * Y.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= C <= 100
 * 0 <= X <= C
 * 1 <= Y <= 100
 * 
 * Since the maximum possible cost is (100 - 0) * 100 = 10,000,
 * standard 'int' is sufficient, but 'long long' is used for safety.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long c, x, y;
        cin >> c >> x >> y;
        
        // Calculate the number of chocolates needed
        long long needed = c - x;
        
        // Calculate total cost
        long long total_cost = needed * y;
        
        // Output the result
        cout << total_cost << "\n";
    }
    
    return 0;
}