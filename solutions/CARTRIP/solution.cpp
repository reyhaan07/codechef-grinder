#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef pays Rs 10 per km.
 * There is a minimum charge for 300 kms.
 * If X < 300, cost = 300 * 10 = 3000.
 * If X >= 300, cost = X * 10.
 * This can be simplified to: cost = max(X, 300) * 10.
 * 
 * Constraints:
 * T <= 100, X <= 1000.
 * The maximum cost will be 1000 * 10 = 10,000, which fits in a standard int.
 * Using long long is safe practice for competitive programming.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Calculate the distance to be charged
        long long distance_charged = max(x, 300LL);
        
        // Calculate total cost
        long long cost = distance_charged * 10;
        
        cout << cost << "\n";
    }
    
    return 0;
}