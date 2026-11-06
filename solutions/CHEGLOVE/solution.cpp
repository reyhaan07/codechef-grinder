#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N fingers with lengths L[i] and N glove sheaths with lengths G[i].
 * 
 * Front orientation:
 * Chef can wear the glove if L[i] <= G[i] for all i from 0 to N-1.
 * 
 * Back orientation:
 * Chef flips the glove. The i-th finger (0-indexed) now corresponds to the sheath at index (N-1-i).
 * Chef can wear the glove if L[i] <= G[N-1-i] for all i from 0 to N-1.
 * 
 * We need to check both conditions and output "front", "back", "both", or "none".
 * 
 * Complexity:
 * Time: O(N) per test case, where N is the number of fingers.
 * Space: O(N) to store the finger and sheath lengths.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> L(N), G(N);
    for (int i = 0; i < N; ++i) cin >> L[i];
    for (int i = 0; i < N; ++i) cin >> G[i];

    bool front = true;
    for (int i = 0; i < N; ++i) {
        if (L[i] > G[i]) {
            front = false;
            break;
        }
    }

    bool back = true;
    for (int i = 0; i < N; ++i) {
        if (L[i] > G[N - 1 - i]) {
            back = false;
            break;
        }
    }

    if (front && back) {
        cout << "both" << "\n";
    } else if (front) {
        cout << "front" << "\n";
    } else if (back) {
        cout << "back" << "\n";
    } else {
        cout << "none" << "\n";
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