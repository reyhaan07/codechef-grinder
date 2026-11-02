#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each over consists of 6 balls.
 * Maximum runs per ball is 6.
 * Therefore, maximum runs per over = 6 * 6 = 36 runs.
 * Given M overs, the maximum runs the team can score is M * 36.
 * The team can win if the required runs N <= M * 36.
 * 
 * Constraints:
 * N <= 1000, M <= 100.
 * Maximum possible runs = 100 * 36 = 3600.
 * This fits comfortably within a standard 32-bit integer, 
 * but using long long is safe practice.
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
        
        // Calculate maximum possible runs in M overs
        long long max_runs = m * 6 * 6;
        
        // Check if required runs are achievable
        if (n <= max_runs) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}