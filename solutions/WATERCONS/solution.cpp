#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: WATERCONS
 * Logic: The doctor advises at least 2000 ml.
 * We need to check if X >= 2000.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Check if Chef followed the advice
        if (x >= 2000) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}