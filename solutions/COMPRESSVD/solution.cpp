#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The operation allows removing a frame if it is equal to its neighbor.
 * If we have a sequence of identical consecutive frames like [2, 2, 2],
 * we can remove the second 2 (equal to the first), then the third 2 (equal to the first).
 * Effectively, any contiguous block of identical values can be reduced to a single frame.
 * 
 * For example: [2, 1, 2, 2]
 * The last two 2s are identical. We can remove one of them.
 * The sequence becomes [2, 1, 2].
 * No more adjacent elements are equal, so we stop.
 * 
 * The problem reduces to counting how many times the value changes as we iterate 
 * through the array. If A[i] == A[i-1], we can remove A[i]. If A[i] != A[i-1], 
 * the frame must remain.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the input array (or O(1) if processed on the fly).
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (N == 0) {
        cout << 0 << "\n";
        return;
    }

    int count = 1; // The first frame is always kept
    for (int i = 1; i < N; ++i) {
        // If the current frame is different from the previous one,
        // it cannot be removed by the rule.
        if (A[i] != A[i - 1]) {
            count++;
        }
    }

    cout << count << "\n";
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