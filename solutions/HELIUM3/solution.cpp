#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to generate at least A units of power each year for B years.
 * Total power required = A * B.
 * The moon has X grams of Helium-3, and each gram provides Y units of power.
 * Total power available = X * Y.
 * 
 * Condition for funding: Total power available >= Total power required.
 * i.e., X * Y >= A * B.
 * 
 * Constraints:
 * A, B, X, Y <= 1000.
 * The product of two numbers up to 1000 is at most 1,000,000.
 * This fits comfortably within a standard 32-bit integer, but using 
 * long long is a safe practice in competitive programming to prevent 
 * potential overflow in more complex scenarios.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        
        // Calculate total required and total available power
        long long required_power = a * b;
        long long available_power = x * y;
        
        // Check condition and output result
        if (available_power >= required_power) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}