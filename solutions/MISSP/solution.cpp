#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N dolls, where N is odd. Every type of doll comes in pairs, 
 * except for one type which has an odd count (specifically 1, since only one is missing).
 * 
 * Property of XOR:
 * 1. a ^ a = 0
 * 2. a ^ 0 = a
 * 3. XOR is commutative and associative.
 * 
 * If we XOR all the doll types together, all pairs will cancel each other out 
 * (x ^ x = 0), leaving only the doll type that appears an odd number of times.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) auxiliary space.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long result = 0;
        for (int i = 0; i < n; ++i) {
            long long doll_type;
            cin >> doll_type;
            // XORing all inputs will result in the missing doll type
            result ^= doll_type;
        }
        
        cout << result << "\n";
    }
    
    return 0;
}