#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to move 1 to index 0 (1-based index 1) and N to index N-1 (1-based index N).
 * Let pos1 be the current index of 1 and posN be the current index of N.
 * 
 * To move 1 to the first position:
 * It takes (pos1 - 1) swaps.
 * To move N to the last position:
 * It takes (N - posN) swaps.
 * 
 * If pos1 < posN, the two paths do not overlap in a way that reduces the total count.
 * Total operations = (pos1 - 1) + (N - posN).
 * 
 * If pos1 > posN, the element 1 must "pass through" the element N during the swaps.
 * When 1 is moved to the left, it swaps with N at some point, effectively moving N 
 * one position to the right for free. Thus, we subtract 1 from the total.
 * Total operations = (pos1 - 1) + (N - posN) - 1.
 */

void solve() {
    int N;
    cin >> N;
    int pos1 = -1, posN = -1;
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        if (val == 1) {
            pos1 = i;
        } else if (val == N) {
            posN = i;
        }
    }

    // Operations to move 1 to index 0: pos1
    // Operations to move N to index N-1: (N - 1) - posN
    int ops = pos1 + (N - 1 - posN);

    // If 1 was originally to the right of N, they cross each other, 
    // saving one operation.
    if (pos1 > posN) {
        ops -= 1;
    }

    cout << ops << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}