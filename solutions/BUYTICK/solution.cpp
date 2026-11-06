#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N seats with costs A_i and a binary string S indicating availability.
 * S_i = 0 means the seat is available, S_i = 1 means it is taken.
 * We need to pick K seats that are available (S_i = 0) such that the sum of their costs is minimized.
 * 
 * Strategy:
 * 1. Collect all costs A_i where S_i == '0'.
 * 2. If the number of available seats is less than K, output -1.
 * 3. Otherwise, sort the collected costs in non-decreasing order.
 * 4. Sum the first K costs and output the result.
 * 
 * Constraints:
 * N, K <= 100, A_i <= 100.
 * The maximum possible sum is 100 * 100 = 10,000, which fits in a standard integer.
 * Using long long is safe practice.
 */

void solve() {
    int N, K;
    if (!(cin >> N >> K)) return;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    string S;
    cin >> S;
    
    vector<int> available_costs;
    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            available_costs.push_back(A[i]);
        }
    }
    
    if (available_costs.size() < (size_t)K) {
        cout << -1 << "\n";
    } else {
        sort(available_costs.begin(), available_costs.end());
        long long min_cost = 0;
        for (int i = 0; i < K; ++i) {
            min_cost += available_costs[i];
        }
        cout << min_cost << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}