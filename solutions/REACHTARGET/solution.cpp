#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Reach the Target
 * The problem asks for the number of runs required to reach a target X given a current score Y.
 * The number of runs needed is simply X - Y.
 * Constraints: 50 <= Y < X <= 200.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Calculate the remaining runs needed to win
        long long runs_needed = x - y;
        
        // Output the result followed by a newline
        cout << runs_needed << "\n";
    }
    
    return 0;
}