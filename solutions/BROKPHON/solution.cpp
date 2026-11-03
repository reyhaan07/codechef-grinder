#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A player i (1-indexed) is involved in a "wrong" message transmission if:
 * 1. The message they received (A[i]) is different from the message the previous player (A[i-1]) sent.
 * 2. The message they sent (A[i]) is different from the message the next player (A[i+1]) received.
 * 
 * Essentially, if A[i] != A[i+1], then either player i whispered it wrong, 
 * or player i+1 misheard it. Both players are "suspect".
 * We need to count the total number of unique players who are part of any 
 * mismatch (A[i] != A[i+1]).
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Use a boolean array to mark players who are involved in a mismatch.
    // A mismatch between A[i] and A[i+1] means both player i and player i+1
    // are potentially at fault.
    vector<bool> is_wrong(N, false);
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] != A[i + 1]) {
            is_wrong[i] = true;
            is_wrong[i + 1] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (is_wrong[i]) {
            count++;
        }
    }
    cout << count << "\n";
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