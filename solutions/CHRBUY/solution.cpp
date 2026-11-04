#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to maximize the stylishness S = 2 * (number of wooden chairs) + 1 * (number of plastic chairs).
 * Let w be the number of wooden chairs bought and p be the number of plastic chairs bought.
 * We have the constraints:
 * 1. 0 <= w <= W
 * 2. 0 <= p <= P
 * 3. w + p = K
 * 
 * To maximize 2w + p, we should prioritize buying wooden chairs because they provide more stylishness (2) 
 * than plastic chairs (1).
 * 
 * Strategy:
 * 1. Buy as many wooden chairs as possible, up to W.
 * 2. If we still need more chairs to reach K, buy the remaining chairs as plastic chairs.
 * 
 * Let w_bought = min(K, W).
 * Then p_bought = K - w_bought.
 * Stylishness = 2 * w_bought + 1 * p_bought.
 */

void solve() {
    long long W, P, K;
    if (!(cin >> W >> P >> K)) return;

    // We want to maximize 2*w + p subject to w <= W, p <= P, w + p = K
    // Since 2 > 1, we greedily pick as many wooden chairs as possible.
    long long w_bought = min(K, W);
    long long p_bought = K - w_bought;

    // Check if we have enough plastic chairs to fulfill the remainder
    // The problem guarantees K <= W + P, so p_bought will always be <= P.
    long long stylishness = (2 * w_bought) + (1 * p_bought);
    
    cout << stylishness << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}