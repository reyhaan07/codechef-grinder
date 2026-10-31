#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N friends. Each burger costs X.
 * Total cost required = N * X.
 * Chef has K rupees.
 * Chef can afford the party if (N * X) <= K.
 * 
 * Constraints:
 * T <= 1000
 * N, X <= 100
 * K <= 10000
 * N * X max value = 100 * 100 = 10000.
 * Since 10000 fits in a standard 32-bit integer, 'int' is sufficient.
 * However, using 'long long' is good practice to prevent overflow in similar problems.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, x, k;
        cin >> n >> x >> k;
        
        // Calculate total cost
        long long total_cost = n * x;
        
        // Check if Chef has enough money
        if (total_cost <= k) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}