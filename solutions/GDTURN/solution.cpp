#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: GDTURN
 * Logic: A turn is good if X + Y > 6.
 * Constraints: 1 <= T <= 100, 1 <= X, Y <= 6.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Check if the sum is strictly greater than 6
        if (x + y > 6) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}