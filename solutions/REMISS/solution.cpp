#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Guard 1 counts A entries.
 * Guard 2 counts B entries.
 * Since at least one guard is always awake, the total number of entries 
 * must be at least the maximum of the two counts (because if the total 
 * were less than max(A, B), one guard would have counted more entries 
 * than actually occurred, which is impossible).
 * 
 * Minimum entries: max(A, B)
 * Maximum entries: A + B (This occurs if the guards never overlap in their 
 * counting, i.e., they count distinct entry events).
 * 
 * Constraints: 0 <= A, B <= 1,000,000.
 * The sum A + B can be up to 2,000,000, which fits in a standard 32-bit integer,
 * but using long long is safer practice in competitive programming.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // Minimum is the maximum of the two counts
        long long min_entries = max(a, b);
        
        // Maximum is the sum of the two counts
        long long max_entries = a + b;
        
        cout << min_entries << " " << max_entries << "\n";
    }
    
    return 0;
}