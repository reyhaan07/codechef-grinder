#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef starts with brick 1.
 * He iterates from brick 2 to N.
 * If he encounters a brick with a size strictly greater than his current brick,
 * he updates his current brick to the new one.
 * 
 * This is equivalent to finding the index (1-based) of the first brick that is 
 * strictly greater than all previous bricks encountered.
 * Actually, it's simpler: he keeps track of the "current maximum" size and its index.
 * If he finds a brick with size > current_max, he updates current_max and the index.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the array (or O(1) if processed on the fly).
 */

void solve() {
    int N;
    if (!(cin >> N)) return;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    int current_brick_idx = 1;
    int current_max_size = A[0];
    
    for (int i = 1; i < N; ++i) {
        if (A[i] > current_max_size) {
            current_max_size = A[i];
            current_brick_idx = i + 1;
        }
    }
    
    cout << current_brick_idx << "\n";
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