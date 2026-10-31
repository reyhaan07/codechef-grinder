#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef takes 30 minutes to reach the office.
 * Chef leaves X minutes before the deadline.
 * If X >= 30, Chef reaches on time (or early).
 * If X < 30, Chef reaches late.
 * 
 * Constraints:
 * 1 <= T <= 60
 * 1 <= X <= 60
 * Time complexity: O(T)
 * Space complexity: O(1)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Chef reaches on time if the time he leaves (X) 
        // is greater than or equal to the commute time (30).
        if (x >= 30) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}