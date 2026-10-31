#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Top 10 participants receive X each. Total = 10 * X.
 * - Participants 11 to 100 (inclusive) receive Y each.
 *   The number of participants from 11 to 100 is 100 - 11 + 1 = 90.
 *   Total = 90 * Y.
 * - Total Prize Money = 10 * X + 90 * Y.
 * 
 * Constraints:
 * - T <= 1000
 * - 1 <= Y <= X <= 1000
 * - Max possible value: 10 * 1000 + 90 * 1000 = 100,000.
 * - This fits well within a standard 32-bit integer, but using long long 
 *   is good practice for competitive programming to prevent overflow.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Calculate total prize money
        long long total_prize = (10 * x) + (90 * y);
        
        // Output the result
        cout << total_prize << "\n";
    }
    
    return 0;
}