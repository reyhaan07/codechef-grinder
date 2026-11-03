#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let the original sequence be S of length N + K.
 * Let the sum of the remaining N elements be S_A = sum(A_i).
 * Let the value of the K deleted elements be X.
 * The average of the original sequence is V.
 * The sum of the original sequence is (N + K) * V.
 * Therefore, S_A + K * X = (N + K) * V.
 * K * X = (N + K) * V - S_A.
 * X = ((N + K) * V - S_A) / K.
 * 
 * Conditions for X to be valid:
 * 1. ((N + K) * V - S_A) must be divisible by K.
 * 2. X must be a positive integer (X > 0).
 */

void solve() {
    long long N, K, V;
    cin >> N >> K >> V;
    
    long long sum_A = 0;
    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        sum_A += a;
    }
    
    long long total_sum_required = (N + K) * V;
    long long diff = total_sum_required - sum_A;
    
    // Check if diff is positive and divisible by K
    if (diff > 0 && (diff % K == 0)) {
        cout << (diff / K) << "\n";
    } else {
        cout << -1 << "\n";
    }
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