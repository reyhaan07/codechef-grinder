#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * For each player i:
 * Points = (A[i] * 20) - (B[i] * 10)
 * If Points < 0, Points = 0.
 * We need to find the maximum points among all players.
 * 
 * Constraints:
 * T <= 100, N <= 150
 * A[i], B[i] <= 50
 * Max possible points = 50 * 20 = 1000.
 * Min possible points = 0 (due to the floor at 0).
 * Time complexity per test case: O(N).
 * Total time complexity: O(T * N), which is well within the 1s limit.
 */

void solve() {
    int N;
    if (!(cin >> N)) return;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];
    
    long long max_points = 0;
    
    for (int i = 0; i < N; ++i) {
        long long current_points = (long long)A[i] * 20 - (long long)B[i] * 10;
        if (current_points < 0) {
            current_points = 0;
        }
        if (current_points > max_points) {
            max_points = current_points;
        }
    }
    
    cout << max_points << "\n";
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}