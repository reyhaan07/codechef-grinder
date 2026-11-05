#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to maximize the sum of |A_i - B_i| where 1 <= B_i <= M.
 * For each element A_i, we want to choose B_i in the range [1, M] such that
 * |A_i - B_i| is maximized.
 * The function f(B_i) = |A_i - B_i| is a convex function. The maximum of a 
 * convex function over a closed interval [1, M] always occurs at the 
 * endpoints of the interval.
 * Therefore, for each A_i, we should choose B_i to be either 1 or M.
 * Specifically, B_i = 1 gives distance |A_i - 1| = A_i - 1.
 * B_i = M gives distance |A_i - M| = M - A_i.
 * To maximize the distance for a specific A_i, we choose max(A_i - 1, M - A_i).
 * The total maximum distance is the sum of these values for all i.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) auxiliary space (excluding input storage).
 */

void solve() {
    int N;
    long long M;
    if (!(cin >> N >> M)) return;
    
    long long total_distance = 0;
    for (int i = 0; i < N; ++i) {
        long long A_i;
        cin >> A_i;
        
        // Distance if B_i = 1 is |A_i - 1| = A_i - 1
        // Distance if B_i = M is |A_i - M| = M - A_i
        // We take the maximum of these two options.
        long long dist1 = A_i - 1;
        long long dist2 = M - A_i;
        
        total_distance += max(dist1, dist2);
    }
    
    cout << total_distance << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}