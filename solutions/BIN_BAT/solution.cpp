#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * N is a power of 2. Let N = 2^k.
 * In a single-elimination tournament with N teams, the number of rounds required 
 * to determine a winner is exactly k, where 2^k = N.
 * 
 * Each round takes A minutes.
 * There is a break of B minutes between every two rounds.
 * If there are k rounds, there are (k - 1) breaks.
 * 
 * Total time = (k * A) + ((k - 1) * B)
 * 
 * Constraints:
 * T <= 10^5
 * N <= 2^20 (so k <= 20)
 * A, B <= 100
 * The result will fit in a standard integer, but using long long is safe practice.
 */

void solve() {
    long long N, A, B;
    cin >> N >> A >> B;

    // Find k such that 2^k = N
    // Since N is a power of 2, we can use log2 or a simple loop/bit manipulation.
    int k = 0;
    long long tempN = N;
    while (tempN > 1) {
        tempN >>= 1;
        k++;
    }

    // Total time calculation
    long long total_time = (k * A) + ((k - 1) * B);
    cout << total_time << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}