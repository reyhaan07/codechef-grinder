#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is at position K. A player at position P_i can capture Chef if K is a multiple of P_i.
 * That is, K % P_i == 0.
 * The number of moves required for player i is K / P_i.
 * We want to minimize the number of moves, which is equivalent to maximizing P_i 
 * such that K % P_i == 0.
 * 
 * Constraints:
 * T <= 100
 * N <= 1,000
 * K, P_i <= 10^9
 * 
 * Algorithm:
 * For each test case:
 * 1. Initialize best_P = -1 and min_moves = infinity.
 * 2. Iterate through all P_i:
 *    a. If K % P_i == 0:
 *       i. Calculate moves = K / P_i.
 *       ii. If moves < min_moves:
 *           min_moves = moves
 *           best_P = P_i
 * 3. Print best_P.
 * 
 * Time Complexity: O(T * N)
 * Space Complexity: O(1) (excluding input storage)
 */

void solve() {
    int N;
    long long K;
    cin >> N >> K;
    
    long long best_P = -1;
    long long min_moves = -1;
    
    for (int i = 0; i < N; ++i) {
        long long P;
        cin >> P;
        
        // Check if player can reach K
        if (K % P == 0) {
            long long moves = K / P;
            // We want the smallest number of moves
            if (min_moves == -1 || moves < min_moves) {
                min_moves = moves;
                best_P = P;
            }
        }
    }
    
    cout << best_P << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}