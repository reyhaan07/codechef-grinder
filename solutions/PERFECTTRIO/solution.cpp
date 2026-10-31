#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A group of three people with ages A, B, and C is "perfect" if:
 * 1. A = B + C
 * 2. B = A + C
 * 3. C = A + B
 * 
 * Given the constraints (1 <= A, B, C <= 100), standard integer types are sufficient.
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
        long long a, b, c;
        cin >> a >> b >> c;
        
        // Check the three conditions for a perfect group
        if ((a == b + c) || (b == a + c) || (c == a + b)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}