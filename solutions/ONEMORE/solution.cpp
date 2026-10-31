#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The episode length is 24 minutes.
 * Chef needs to finish the episode strictly before the exam starts.
 * The exam starts in X minutes.
 * "Strictly before" means the time taken (24 minutes) must be less than X.
 * Condition: X > 24
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X <= 100
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
        
        // Check if the time available is strictly greater than the episode length
        if (x > 24) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}