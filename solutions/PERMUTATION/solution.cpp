#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given an array A of size N. We can only increase elements.
 * We want to transform A into a permutation of {1, 2, ..., N}.
 * 
 * Strategy:
 * 1. Sort the array A in non-decreasing order.
 * 2. To minimize the total number of operations, we should map the smallest 
 *    elements in the sorted array to the smallest values in the target 
 *    permutation {1, 2, ..., N}.
 * 3. After sorting, if A[i] > (i + 1), it is impossible to transform A[i] 
 *    into (i + 1) because we can only increase values. In this case, output -1.
 * 4. Otherwise, the cost to transform A[i] to (i + 1) is (i + 1) - A[i].
 * 5. Sum these costs for all i from 0 to N-1.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Sort the array to greedily match the smallest elements to 1, 2, ..., N
    sort(A.begin(), A.end());

    long long total_ops = 0;
    for (int i = 0; i < N; ++i) {
        // The target value for the i-th element (0-indexed) is (i + 1)
        long long target = i + 1;
        
        // If the current element is already greater than the target,
        // we cannot decrease it, so it's impossible to form a permutation.
        if (A[i] > target) {
            cout << -1 << "\n";
            return;
        }
        
        // Add the difference to the total operations
        total_ops += (target - A[i]);
    }

    cout << total_ops << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}