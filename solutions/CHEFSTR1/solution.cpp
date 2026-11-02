#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To move from string S_i to S_{i+1}, the number of strings skipped is:
 * |S_{i+1} - S_i| - 1.
 * 
 * We need to sum this value for all i from 1 to N-1.
 * Total = sum_{i=1}^{N-1} (|S_{i+1} - S_i| - 1)
 * 
 * Constraints:
 * N <= 10^5, S_i <= 10^6.
 * The total sum can exceed the range of a 32-bit integer, so we use long long.
 * Time complexity: O(N) per test case.
 * Space complexity: O(1) if we process input on the fly, or O(N) to store the array.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        
        long long total_skipped = 0;
        long long prev_s;
        cin >> prev_s;
        
        for (int i = 1; i < n; ++i) {
            long long curr_s;
            cin >> curr_s;
            
            // Calculate absolute difference and subtract 1
            long long diff = abs(curr_s - prev_s);
            if (diff > 0) {
                total_skipped += (diff - 1);
            }
            
            prev_s = curr_s;
        }
        
        cout << total_skipped << "\n";
    }
    
    return 0;
}