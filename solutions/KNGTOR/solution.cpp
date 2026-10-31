#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N cars with 5 seats each and M cars with 7 seats each.
 * The total capacity is simply the sum of the capacities of all cars.
 * Total = (N * 5) + (M * 7).
 * 
 * Constraints:
 * T <= 100
 * 0 <= N, M <= 100
 * The maximum possible value is (100 * 5) + (100 * 7) = 1200.
 * This fits comfortably within a standard 32-bit integer, but using long long
 * is a safe practice in competitive programming to prevent overflow in larger problems.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        if (cin >> n >> m) {
            // Calculate total capacity
            long long total_capacity = (n * 5) + (m * 7);
            
            // Output the result
            cout << total_capacity << "\n";
        }
    }

    return 0;
}