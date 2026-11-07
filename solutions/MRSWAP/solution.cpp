#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have an array A of size 2N.
 * We can swap A[i] with A[2N + 1 - i] (1-based indexing).
 * This means for each pair (A[i], A[2N + 1 - i]), we can choose which one 
 * goes into the first half (indices 1 to N) and which one stays in the second half.
 * To maximize the sum of the first half, for each pair (A[i], A[2N + 1 - i]),
 * we should pick the maximum of the two values to be in the first half.
 * 
 * The pairs are:
 * (A[0], A[2N-1]), (A[1], A[2N-2]), ..., (A[N-1], A[N]) using 0-based indexing.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the array.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(2 * N);
    for (int i = 0; i < 2 * N; ++i) {
        cin >> A[i];
    }

    long long max_sum = 0;
    // Iterate through the first N elements and compare with their mirror counterpart
    for (int i = 0; i < N; ++i) {
        long long val1 = A[i];
        long long val2 = A[2 * N - 1 - i];
        max_sum += max(val1, val2);
    }

    cout << max_sum << "\n";
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