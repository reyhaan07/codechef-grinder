#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N apples and M oranges. We can perform at most K operations.
 * Each operation allows us to increase the count of the fruit that is smaller
 * by 1, effectively reducing the absolute difference |N - M|.
 * 
 * Strategy:
 * 1. Identify which fruit count is smaller.
 * 2. Use the K coins to increase the smaller count until it equals the larger count
 *    or until we run out of coins.
 * 3. The difference will be |N - M| - (number of coins used).
 * 4. If K is large enough to make the counts equal, the difference becomes 0.
 */

void solve() {
    long long n, m, k;
    if (!(cin >> n >> m >> k)) return;

    // Ensure n is the smaller value to simplify logic
    if (n > m) {
        swap(n, m);
    }

    // Now n <= m. We want to increase n towards m using at most k coins.
    long long diff = m - n;
    
    // We can use at most k coins to bridge the gap
    long long can_bridge = min(diff, k);
    
    // The new difference will be the original difference minus the coins used
    long long result = diff - can_bridge;
    
    cout << result << "\n";
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