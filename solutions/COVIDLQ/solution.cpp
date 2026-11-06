#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a sequence of 0s and 1s representing a queue.
 * We need to ensure that for any two people (1s) in the queue, 
 * the distance between them is at least 6 feet.
 * 
 * If the index of the last person seen is 'last_pos', and the current 
 * index is 'i', the distance is (i - last_pos).
 * We need (i - last_pos) >= 6 for all pairs of consecutive people.
 * 
 * Complexity:
 * Time: O(N) per test case, where N is the number of spots.
 * Space: O(1) auxiliary space.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    int last_pos = -10; // Initialize with a value such that distance > 6
    bool possible = true;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] == 1) {
            // If this is not the first person found, check distance
            if (i - last_pos < 6) {
                possible = false;
            }
            last_pos = i;
        }
    }

    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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