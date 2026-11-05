#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks for the minimum Manhattan distance from a starting point (A, B)
 * to any of the N given attractions (Xi, Yi).
 * The Manhattan distance between (A, B) and (Xi, Yi) is defined as |A - Xi| + |B - Yi|.
 * 
 * Constraints:
 * T <= 100, N <= 100, coordinates are between 0 and 100.
 * The time complexity per test case will be O(N), and total complexity O(T * N).
 * Given the constraints, this is well within the 1s time limit.
 */

void solve() {
    int N;
    long long A, B;
    if (!(cin >> N >> A >> B)) return;

    long long min_dist = -1;

    for (int i = 0; i < N; ++i) {
        long long Xi, Yi;
        cin >> Xi >> Yi;
        
        // Calculate Manhattan distance
        long long current_dist = abs(A - Xi) + abs(B - Yi);
        
        // Update minimum distance
        if (min_dist == -1 || current_dist < min_dist) {
            min_dist = current_dist;
        }
    }
    
    cout << min_dist << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}