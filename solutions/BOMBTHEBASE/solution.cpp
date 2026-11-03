#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N houses with defense strengths A_1, A_2, ..., A_N.
 * A bomb with strength X destroys house i if A_i < X.
 * If house i is destroyed, all houses j where 1 <= j <= i are destroyed.
 * To maximize the number of destroyed houses, we need to find the largest index i 
 * such that A_i < X. If such an i exists, the answer is i. 
 * If no such i exists, the answer is 0.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) auxiliary space (if we process input on the fly).
 */

void solve() {
    int N;
    long long X;
    cin >> N >> X;
    
    int max_destroyed = 0;
    for (int i = 1; i <= N; ++i) {
        long long A;
        cin >> A;
        // If the current house can be destroyed, it means all houses 
        // from 1 to i are destroyed. Since we want the maximum, 
        // we keep track of the largest index i that satisfies the condition.
        if (A < X) {
            max_destroyed = i;
        }
    }
    
    cout << max_destroyed << "\n";
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