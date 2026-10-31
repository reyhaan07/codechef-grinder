#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three amounts A, B, and C and a cost X.
 * We need to check if any pair of (A, B), (B, C), or (A, C) sums up to at least X.
 * 
 * Logic:
 * Check if (A + B >= X) OR (B + C >= X) OR (A + C >= X).
 * If any of these conditions are true, output YES, otherwise output NO.
 * 
 * Constraints:
 * A, B, C, X are between 1 and 100.
 * The sum of any two will not exceed 200, so standard 'int' is sufficient.
 * Time complexity per test case: O(1).
 * Total time complexity: O(T).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        
        // Check all possible pairs
        if ((a + b >= x) || (b + c >= x) || (a + c >= x)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}