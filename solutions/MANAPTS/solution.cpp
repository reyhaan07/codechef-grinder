#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chefario has Y mana points and each attack costs X mana points.
 * The maximum number of attacks he can perform is the floor of Y divided by X.
 * Mathematically, this is floor(Y / X).
 * 
 * Constraints:
 * T <= 10^5
 * X <= 100
 * Y <= 1000
 * Since Y and X are small, integer division in C++ will naturally perform
 * the floor operation, which is exactly what we need.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // The maximum number of attacks is Y / X.
        // If Y < X, the result is 0, which is handled correctly by integer division.
        long long max_attacks = y / x;
        
        cout << max_attacks << "\n";
    }
    
    return 0;
}