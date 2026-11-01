#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The binary parity of N is defined by the parity of the sum of its binary digits.
 * The sum of binary digits of N is equivalent to the number of set bits (1s) in N.
 * This is commonly known as the population count (popcount).
 * 
 * We need to determine if the popcount of N is even or odd.
 * In C++, __builtin_popcount(N) returns the number of set bits.
 * If __builtin_popcount(N) % 2 == 0, the parity is EVEN.
 * Otherwise, the parity is ODD.
 * 
 * Constraints:
 * T <= 10^5, N <= 10^9.
 * __builtin_popcount works for 32-bit integers. Since N <= 10^9, 
 * it fits within a standard 32-bit signed integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        
        // __builtin_popcount returns the number of set bits in the integer
        int set_bits = __builtin_popcount(n);
        
        if (set_bits % 2 == 0) {
            cout << "EVEN" << "\n";
        } else {
            cout << "ODD" << "\n";
        }
    }
    
    return 0;
}