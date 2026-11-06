#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N cars with initial prices P_i.
 * Each year, the price of every unsold car decreases by 1.
 * To maximize profit, we should sell the most expensive cars first.
 * If we sort the prices in descending order: P_1 >= P_2 >= ... >= P_N,
 * in year 0 (first year), we sell the car with price P_1. Profit = P_1.
 * In year 1, the remaining cars have depreciated by 1. We sell the car that was P_2.
 * Its price is now max(0, P_2 - 1).
 * In year i (0-indexed), we sell the car that was originally P_{i+1}.
 * Its price is now max(0, P_{i+1} - i).
 * 
 * The total profit is the sum of max(0, P_{i+1} - i) for i = 0 to N-1.
 * Since we need the result modulo 1,000,000,007, we perform the modulo operation
 * at each addition step.
 */

void solve() {
    int N;
    if (!(cin >> N)) return;
    vector<long long> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    // Sort in descending order to sell the most expensive cars first
    sort(P.begin(), P.end(), greater<long long>());

    long long total_profit = 0;
    long long MOD = 1000000007;

    for (int i = 0; i < N; ++i) {
        // Price of the car sold in year i is max(0, P[i] - i)
        long long current_price = P[i] - i;
        if (current_price > 0) {
            total_profit = (total_profit + current_price) % MOD;
        }
    }

    cout << total_profit << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}