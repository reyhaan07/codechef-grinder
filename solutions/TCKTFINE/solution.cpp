#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - X: Fine per passenger without a ticket.
 * - P: Total number of passengers.
 * - Q: Total number of tickets present.
 * - Passengers without tickets = P - Q.
 * - Total fine = (P - Q) * X.
 * 
 * Constraints:
 * - T <= 10, X <= 10, Q <= P <= 10.
 * - The values are small enough that standard 'int' is sufficient, 
 *   but 'long long' is used for robustness as per instructions.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, p, q;
        cin >> x >> p >> q;
        
        // Calculate number of passengers without tickets
        long long passengers_without_ticket = p - q;
        
        // Calculate total fine
        long long total_fine = passengers_without_ticket * x;
        
        // Output the result
        cout << total_fine << "\n";
    }

    return 0;
}