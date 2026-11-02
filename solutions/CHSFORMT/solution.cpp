#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chess Format
 * Logic:
 * Calculate sum = a + b.
 * Use if-else ladder to categorize based on the given ranges:
 * 1) Bullet: sum < 3
 * 2) Blitz: 3 <= sum <= 10
 * 3) Rapid: 11 <= sum <= 60
 * 4) Classical: sum > 60
 * 
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
        long long a, b;
        cin >> a >> b;
        long long total_time = a + b;
        
        if (total_time < 3) {
            cout << 1 << "\n";
        } else if (total_time >= 3 && total_time <= 10) {
            cout << 2 << "\n";
        } else if (total_time >= 11 && total_time <= 60) {
            cout << 3 << "\n";
        } else {
            // total_time > 60
            cout << 4 << "\n";
        }
    }
    
    return 0;
}