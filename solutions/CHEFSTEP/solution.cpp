#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef can only walk in steps of length exactly K.
 * This means a distance D_i is traversable if and only if D_i is divisible by K.
 * Mathematically, D_i % K == 0.
 * 
 * Constraints:
 * T <= 1000, N <= 1000, K <= 10^9, D_i <= 10^9.
 * Since D_i and K fit within a standard 32-bit signed integer, 
 * but using long long is safer for competitive programming to avoid any potential overflow 
 * during intermediate calculations or if constraints were slightly larger.
 * 
 * Time Complexity: O(T * N)
 * Space Complexity: O(1) (excluding the output string)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        string result = "";
        for (int i = 0; i < n; ++i) {
            long long d;
            cin >> d;
            
            // Check if distance is divisible by step length K
            if (d % k == 0) {
                result += '1';
            } else {
                result += '0';
            }
        }
        
        cout << result << "\n";
    }
    
    return 0;
}