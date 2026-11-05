#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef starts with happiness = 0.
 * For each element A[i]:
 * - If l <= A[i] <= r, happiness increases by 1.
 * - Otherwise, happiness decreases by 1.
 * We need to track the running happiness and find the global maximum and minimum
 * encountered throughout the process, including the initial state (0).
 * 
 * Complexity:
 * Time: O(N) per test case, O(sum of N) total. This fits within the 1s limit.
 * Space: O(1) auxiliary space (excluding input storage).
 */

void solve() {
    int N;
    long long l, r;
    if (!(cin >> N >> l >> r)) return;

    long long current_happiness = 0;
    long long max_happiness = 0;
    long long min_happiness = 0;

    for (int i = 0; i < N; ++i) {
        long long val;
        cin >> val;
        
        if (val >= l && val <= r) {
            current_happiness++;
        } else {
            current_happiness--;
        }
        
        if (current_happiness > max_happiness) {
            max_happiness = current_happiness;
        }
        if (current_happiness < min_happiness) {
            min_happiness = current_happiness;
        }
    }

    cout << max_happiness << " " << min_happiness << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}