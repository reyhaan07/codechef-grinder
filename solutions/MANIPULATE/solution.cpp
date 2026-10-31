#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Ezio and Guards
 * Logic: Ezio can manipulate at most X guards. If the number of guards Y is 
 * less than or equal to X, he can manipulate all of them.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
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
        
        // Check if Ezio's capacity X is sufficient for Y guards
        if (x >= y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}