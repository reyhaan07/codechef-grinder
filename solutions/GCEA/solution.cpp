#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * For each Pekómon i with difficulty A_i:
 * - Cost using Normal Pekóballs: A_i * X
 * - Cost using a Master Pekóball: Y
 * 
 * To minimize the total cost, for each Pekómon, we should choose the minimum 
 * of (A_i * X) and Y.
 * 
 * Total Cost = Sum over all i of min(A_i * X, Y)
 * 
 * Constraints:
 * N, X, Y, A_i are all <= 100.
 * The maximum possible cost would be 100 * 100 * 100 = 1,000,000.
 * This fits well within a standard 32-bit integer, but using long long 
 * is safer and good practice in competitive programming.
 */

void solve() {
    int N;
    long long X, Y;
    cin >> N >> X >> Y;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long total_cost = 0;
    for (int i = 0; i < N; ++i) {
        // For each Pekómon, pick the cheaper option
        long long normal_cost = (long long)A[i] * X;
        total_cost += min(normal_cost, Y);
    }
    
    cout << total_cost << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}