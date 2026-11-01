#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N coins. In each round k (from 1 to N), we flip all coins from 1 to k.
 * Let's observe the state of coin i after N rounds.
 * Coin i is flipped in round k if and only if i <= k.
 * So, coin i is flipped for k = i, i+1, ..., N.
 * The total number of times coin i is flipped is (N - i + 1).
 * 
 * If (N - i + 1) is even, the coin returns to its initial state.
 * If (N - i + 1) is odd, the coin changes its state.
 * 
 * Case 1: N is even.
 * - For i = 1 to N: (N - i + 1) is odd if i is even, even if i is odd.
 *   There are N/2 coins that flip and N/2 that don't.
 * Case 2: N is odd.
 * - For i = 1 to N: (N - i + 1) is odd if i is odd, even if i is even.
 *   There are (N+1)/2 coins that flip and (N-1)/2 that don't.
 * 
 * General logic:
 * Number of coins that flip = N / 2.
 * Number of coins that don't flip = N - (N / 2).
 * 
 * If I == Q (Initial state matches target state):
 * - Coins that don't flip remain in initial state (N - N/2).
 * - Coins that flip change to the opposite state.
 * - Result = N - N/2.
 * 
 * If I != Q (Initial state differs from target state):
 * - Coins that flip change to the target state (N/2).
 * - Result = N / 2.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int g;
        cin >> g;
        while (g--) {
            long long i, n, q;
            cin >> i >> n >> q;

            // Number of coins that flip is n / 2
            // Number of coins that don't flip is n - n / 2
            if (i == q) {
                // We want the count of coins that are in the same state as initial
                // These are the ones that were flipped an even number of times
                cout << (n / 2) << "\n";
            } else {
                // We want the count of coins that are in the opposite state
                // These are the ones that were flipped an odd number of times
                cout << (n - n / 2) << "\n";
            }
        }
    }
    return 0;
}