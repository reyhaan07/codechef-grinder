#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is 3rd.
 * Gap between Chef and 2nd place = A
 * Gap between 2nd place and 1st place = B
 * Total gap between Chef and 1st place = A + B
 * 
 * Constraints:
 * T <= 100
 * 1 <= A, B <= 10
 * Since A and B are very small, the sum will not exceed 20, 
 * which fits comfortably within a standard integer.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b;
        if (cin >> a >> b) {
            // The time gap between Chef and the winner is the sum of the two gaps
            cout << (a + b) << "\n";
        }
    }

    return 0;
}