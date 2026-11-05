#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The strike rate is defined as (total_runs / total_balls) * 100.
 * We want to find how many times this equals 100.
 * (total_runs / total_balls) * 100 = 100
 * This simplifies to:
 * total_runs / total_balls = 1
 * total_runs = total_balls
 * 
 * We need to maintain a running sum of runs and compare it to the 
 * current count of balls played (which is the index + 1).
 * 
 * Constraints:
 * N <= 10^5, sum of N <= 10^6.
 * A_i <= 6.
 * Total runs can be at most 6 * 10^5, which fits in a standard 32-bit integer,
 * but using long long is safer and good practice.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    long long current_runs = 0;
    int count_100 = 0;
    
    for (int i = 1; i <= n; ++i) {
        int runs;
        cin >> runs;
        current_runs += runs;
        
        // Strike rate is 100 if total_runs == total_balls
        if (current_runs == i) {
            count_100++;
        }
    }
    
    cout << count_100 << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}