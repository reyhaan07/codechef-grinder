#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given an initial energy E and a reduction factor K.
 * The energy at level 1 is E.
 * The energy at level i+1 is floor(energy at level i / K).
 * We need to find the number of levels until the energy becomes 0.
 * 
 * Constraints:
 * E <= 10^9, K <= 10^9.
 * Since E reduces by at least a factor of 2 each step (K >= 2), 
 * the number of steps will be logarithmic, specifically O(log_K(E)).
 * For E = 10^9 and K = 2, log2(10^9) is approximately 30.
 * This is well within the time limit for 10^4 test cases.
 */

void solve() {
    long long E, K;
    if (!(cin >> E >> K)) return;
    
    int count = 0;
    while (E > 0) {
        count++;
        E = E / K;
    }
    cout << count << "\n";
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