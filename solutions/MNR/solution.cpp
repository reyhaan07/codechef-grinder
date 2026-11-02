#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given an array A of size N and can delete at most two elements.
 * We want to minimize (max(A) - min(A)).
 * 
 * To minimize the range, we should sort the array first.
 * Let the sorted array be A[0], A[1], ..., A[N-1].
 * After deleting at most two elements, the remaining elements will be a contiguous 
 * subarray of the sorted array if we remove elements from the ends.
 * Specifically, we have three strategies to remove two elements:
 * 1. Remove the two smallest elements: The range is A[N-1] - A[2].
 * 2. Remove the two largest elements: The range is A[N-3] - A[0].
 * 3. Remove one smallest and one largest element: The range is A[N-2] - A[1].
 * 
 * Since we can delete "at most" two, these strategies cover the optimal cases.
 * Time Complexity: O(N log N) per test case due to sorting.
 * Space Complexity: O(N) to store the array.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (N <= 3) {
        cout << 0 << "\n";
        return;
    }

    sort(A.begin(), A.end());

    // Strategy 1: Remove two smallest
    long long res1 = A[N - 1] - A[2];
    // Strategy 2: Remove two largest
    long long res2 = A[N - 3] - A[0];
    // Strategy 3: Remove one smallest and one largest
    long long res3 = A[N - 2] - A[1];

    long long ans = min({res1, res2, res3});
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}