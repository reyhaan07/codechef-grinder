#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to select exactly two items (i, j) where i != j.
 * Let the costs be A[i] and A[j].
 * Let the more expensive item be M = max(A[i], A[j]) and the other be S = min(A[i], A[j]).
 * The discount on M is min(M / 2, 100).
 * The final cost is S + (M - min(M / 2, 100)).
 * We need to check if this final cost <= K.
 * If valid, we track the maximum sum of tastiness (B[i] + B[j]).
 * 
 * Constraints:
 * N <= 100, T <= 100.
 * O(N^2) per test case is perfectly fine (100^2 = 10,000 operations per test case).
 * Total operations ~ 10^6, well within the 1s time limit.
 */

void solve() {
    int N;
    long long K;
    cin >> N >> K;
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];

    long long max_tastiness = 0;
    bool found = false;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            long long cost1 = A[i];
            long long cost2 = A[j];
            
            long long M = max(cost1, cost2);
            long long S = min(cost1, cost2);
            
            // Discount calculation
            long long discount = min(M / 2, 100LL);
            long long final_cost = S + (M - discount);
            
            if (final_cost <= K) {
                found = true;
                max_tastiness = max(max_tastiness, B[i] + B[j]);
            }
        }
    }

    if (!found) {
        cout << 0 << "\n";
    } else {
        cout << max_tastiness << "\n";
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