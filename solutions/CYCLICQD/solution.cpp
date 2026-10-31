#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A quadrilateral is cyclic if and only if the sum of its opposite angles is 180 degrees.
 * Given angles A, B, C, D in order along the perimeter, the opposite pairs are:
 * (A, C) and (B, D).
 * 
 * Therefore, the quadrilateral is cyclic if and only if:
 * A + C == 180 AND B + D == 180.
 * 
 * Since the sum of all angles in a quadrilateral is 360 degrees (A + B + C + D = 360),
 * if A + C = 180, then B + D must be 360 - 180 = 180.
 * Thus, we only need to check if A + C == 180.
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
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Check if opposite angles sum to 180
        if (a + c == 180 && b + d == 180) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}