#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - We have two guns:
 *   - Close-range: distance <= D
 *   - Long-range: distance > D
 * - Initially holding: Close-range gun.
 * - We need to shoot N targets in order.
 * - We want to minimize the number of switches.
 * 
 * Logic:
 * - Let current_gun = 0 (Close-range)
 * - For each target i:
 *   - Determine required_gun: 0 if A[i] <= D, 1 if A[i] > D
 *   - If current_gun != required_gun:
 *     - Increment switch count
 *     - Update current_gun = required_gun
 * - This greedy approach works because each target forces a specific gun, 
 *   and we only switch when the current gun cannot hit the target.
 */

void solve() {
    int N, D;
    cin >> N >> D;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    int current_gun = 0; // 0 for Close-range, 1 for Long-range
    int switches = 0;
    
    for (int i = 0; i < N; ++i) {
        int required_gun = (A[i] <= D) ? 0 : 1;
        
        if (current_gun != required_gun) {
            switches++;
            current_gun = required_gun;
        }
    }
    
    cout << switches << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}