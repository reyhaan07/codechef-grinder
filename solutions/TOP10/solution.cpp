#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Masterchef finals
 * Logic: Chef makes it to the top 10 if his rank X is less than or equal to 10.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a single integer variable per test case.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Check if rank is within the top 10
        if (x <= 10) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}