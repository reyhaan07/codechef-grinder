#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef passes if:
 * 1. A >= A_min
 * 2. B >= B_min
 * 3. C >= C_min
 * 4. (A + B + C) >= T_min
 * 
 * Constraints are small (up to 300), so standard integer types are sufficient.
 * Time complexity per test case: O(1)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int A_min, B_min, C_min, T_min, A, B, C;
        cin >> A_min >> B_min >> C_min >> T_min >> A >> B >> C;
        
        // Check individual subject requirements and total sum requirement
        if (A >= A_min && B >= B_min && C >= C_min && (A + B + C) >= T_min) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}