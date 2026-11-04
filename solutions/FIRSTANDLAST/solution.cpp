#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Given an array A of length N, we want to maximize A[1] + A[N] after any number of right rotations.
 * A right rotation shifts elements such that the last element becomes the first.
 * After any number of rotations, the new first element (A_1) and the new last element (A_N)
 * will always be a pair of adjacent elements in the original array (considering the array circular).
 * Specifically, if the original array is [A_1, A_2, ..., A_N], the possible pairs (A_1, A_N)
 * after rotations are:
 * (A_1, A_N), (A_2, A_1), (A_3, A_2), ..., (A_N, A_{N-1}).
 * 
 * In general, we are looking for the maximum of (A[i] + A[i-1]) for i from 1 to N-1,
 * plus the wrap-around case (A[N] + A[1]).
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the array.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // The possible pairs are (A[0], A[N-1]) and (A[i], A[i-1]) for i = 1 to N-1.
    // We initialize max_sum with the wrap-around case.
    long long max_sum = A[0] + A[N - 1];

    for (int i = 1; i < N; ++i) {
        long long current_sum = A[i] + A[i - 1];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    cout << max_sum << "\n";
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}