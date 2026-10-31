#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice has A chocolates and Bob has B chocolates.
 * Total chocolates = A + B.
 * To distribute them equally between two people, the total sum (A + B)
 * must be divisible by 2.
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= A, B <= 10^5
 * The sum A + B will be at most 2 * 10^5, which fits in a standard 32-bit integer.
 * Using long long is safe practice for competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // Check if the total sum is even
        if ((a + b) % 2 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}