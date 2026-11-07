#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have X zeros and Y ones.
 * We want to arrange them such that there are at least K ones between any two zeros.
 * 
 * If we have X zeros, there are (X - 1) gaps between them.
 * Let the number of ones in each gap be g_1, g_2, ..., g_{X-1}.
 * The condition is that each g_i >= K.
 * The total number of ones used in these gaps is sum(g_i) >= (X - 1) * K.
 * 
 * We also have ones that can be placed before the first zero and after the last zero.
 * However, the problem states "between any two occurrences of 0s".
 * This means the ones placed before the first zero and after the last zero do not 
 * contribute to the "between" condition.
 * 
 * Thus, we only need to satisfy:
 * (X - 1) * K <= Y
 * 
 * Solving for K:
 * K <= Y / (X - 1)
 * 
 * Since we want the largest integer K, K = floor(Y / (X - 1)).
 * 
 * Constraints:
 * X, Y <= 10^9.
 * X - 1 can be up to 10^9 - 1.
 * Y / (X - 1) will fit in a long long.
 */

void solve() {
    long long X, Y;
    if (!(cin >> X >> Y)) return;
    
    // The number of gaps between X zeros is (X - 1).
    // The total number of ones Y must be distributed such that each gap has at least K ones.
    // So, (X - 1) * K <= Y
    // K = Y / (X - 1)
    
    long long K = Y / (X - 1);
    cout << K << "\n";
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