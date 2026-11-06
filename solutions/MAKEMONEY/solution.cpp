#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * For each bag i, we have two choices:
 * 1. Keep A_i as it is. Contribution to the total sum: A_i. Cost: 0.
 * 2. Perform an operation to set A_i = X. Contribution to the total sum: X. Cost: C.
 *    Net gain from this operation: (X - C) - A_i.
 * 
 * We should perform the operation if and only if the net gain is positive.
 * That is, if (X - C) > A_i, or equivalently, if (X - A_i) > C.
 * 
 * Since we want to maximize the total value, we iterate through each bag and 
 * check if replacing A_i with X and paying C results in a higher net value.
 */

void solve() {
    int N;
    long long X, C;
    cin >> N >> X >> C;
    
    vector<long long> A(N);
    long long total_sum = 0;
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long final_value = 0;
    for (int i = 0; i < N; ++i) {
        // If we perform the operation, the net contribution of this bag is (X - C).
        // If we don't, the contribution is A[i].
        // We choose the maximum of the two.
        if ((X - C) > A[i]) {
            final_value += (X - C);
        } else {
            final_value += A[i];
        }
    }
    
    cout << final_value << "\n";
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