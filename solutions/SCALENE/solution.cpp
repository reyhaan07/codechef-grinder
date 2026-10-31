#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A triangle is scalene if all three sides are distinct.
 * Given sides A, B, and C, the condition for being scalene is:
 * A != B AND B != C AND A != C.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= A <= B <= C <= 10
 * Since A <= B <= C, the condition simplifies to:
 * A != B AND B != C.
 * If A != B and B != C, then A must also be != C (because if A == C, 
 * then A == B == C, which contradicts A != B).
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
        int a, b, c;
        cin >> a >> b >> c;
        
        // A triangle is scalene if all sides are distinct.
        // Given the constraint A <= B <= C, we only need to check
        // if A != B and B != C.
        if (a != b && b != c) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}