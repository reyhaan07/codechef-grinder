#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N GB of space.
 * He has X files of 1 GB each and Y files of 2 GB each.
 * Total size required = (X * 1) + (Y * 2).
 * Condition: Chef can save files if (X + 2 * Y) <= N.
 * 
 * Constraints:
 * T <= 100
 * N, X, Y <= 100
 * The total size will be at most 100 + 2 * 100 = 300, which fits in a standard int.
 * Time complexity per test case: O(1)
 * Total time complexity: O(T)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        
        // Calculate total size required
        long long total_size = x + (2 * y);
        
        // Check if total size fits in N
        if (total_size <= n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}