#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef earns X, Chefina earns Y, where Y > X.
 * They want to end up with the same amount by donating the difference.
 * The difference is simply Y - X.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X < Y <= 10
 * Since the values are very small, standard integer types are sufficient.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // The amount to donate is the difference between their incomes
        long long donation = y - x;
        
        cout << donation << "\n";
    }
    
    return 0;
}