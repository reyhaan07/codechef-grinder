#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A person is sleep deprived if they slept strictly less than 7 hours.
 * Given X hours, we need to check if X < 7.
 * 
 * Constraints:
 * 1 <= T <= 20
 * 1 <= X <= 15
 * 
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
        int x;
        cin >> x;
        
        // Check if sleep duration is strictly less than 7
        if (x < 7) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}