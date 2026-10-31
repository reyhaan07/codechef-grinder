#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A monopoly exists if any company's profit is strictly greater than the sum of the other three.
 * Let the profits be P, Q, R, S.
 * Total sum = P + Q + R + S.
 * For company A: P > (Q + R + S)
 * This is equivalent to: P > (Total - P)
 * Or: 2 * P > Total
 * We check this condition for all four companies.
 */

void solve() {
    long long p, q, r, s;
    if (!(cin >> p >> q >> r >> s)) return;
    
    long long total = p + q + r + s;
    
    // Check if any company has a monopoly
    if ((p > (total - p)) || 
        (q > (total - q)) || 
        (r > (total - r)) || 
        (s > (total - s))) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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