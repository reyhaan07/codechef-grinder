#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks for the number of unattempted problems given the total number of problems (X)
 * and the number of attempted problems (Y).
 * The number of unattempted problems is simply X - Y.
 * 
 * Constraints:
 * 1 <= Y <= X <= 1000
 * Since the values are small, standard integer types are sufficient.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the input format.
    // However, if the platform expects handling multiple test cases, the structure is:
    // int t; cin >> t; while(t--) { ... }
    // Given the specific problem description format, we read X and Y directly.
    
    long long X, Y;
    if (cin >> X >> Y) {
        // Calculate the difference
        long long unattempted = X - Y;
        
        // Output the result
        cout << unattempted << "\n";
    }

    return 0;
}