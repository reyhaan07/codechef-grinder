#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N items with prices P_i.
 * A price ceiling K is introduced.
 * If P_i > K, the price becomes K.
 * The loss for a single item i is:
 * - If P_i > K: loss = P_i - K
 * - If P_i <= K: loss = 0
 * Total loss = sum of max(0, P_i - K) for all i from 1 to N.
 * 
 * Constraints:
 * T <= 100, N <= 10,000, P_i <= 1,000, K <= 1,000.
 * The maximum possible loss per item is 1,000.
 * Total loss <= 10,000 * 1,000 = 10,000,000.
 * This fits within a standard 32-bit integer, but using long long is safe practice.
 */

void solve() {
    int N;
    long long K;
    if (!(cin >> N >> K)) return;
    
    long long total_loss = 0;
    for (int i = 0; i < N; ++i) {
        long long P;
        cin >> P;
        if (P > K) {
            total_loss += (P - K);
        }
    }
    cout << total_loss << "\n";
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