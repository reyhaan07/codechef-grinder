#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * There are N customers waiting. Each haircut takes M minutes.
 * Since only one person can get a haircut at a time, the total time
 * Chef has to wait is the sum of the time taken for all N customers.
 * Total time = N * M.
 * 
 * Constraints:
 * N, M <= 1000.
 * The maximum possible value is 1000 * 1000 = 1,000,000.
 * This fits comfortably within a standard 32-bit integer, but using
 * long long is a safe practice in competitive programming to avoid overflow.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        // The waiting time is simply the number of customers multiplied by time per customer.
        // If N = 0, the result is 0 * M = 0, which is correct.
        long long wait_time = n * m;
        
        cout << wait_time << "\n";
    }

    return 0;
}