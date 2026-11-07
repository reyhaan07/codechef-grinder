#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given an array A of size N. We must change exactly one element to minimize (max(A) - min(A)).
 * 
 * Let the sorted array be A[0], A[1], ..., A[N-1].
 * The current range is A[N-1] - A[0].
 * 
 * By changing one element, we can effectively remove either the current maximum or the current minimum.
 * 1. If we change the current maximum (A[N-1]) to be equal to the second largest element (A[N-2]), 
 *    the new range becomes A[N-2] - A[0].
 * 2. If we change the current minimum (A[0]) to be equal to the second smallest element (A[1]), 
 *    the new range becomes A[N-1] - A[1].
 * 
 * Since we want to minimize the range, we take the minimum of these two possibilities:
 * min(A[N-2] - A[0], A[N-1] - A[1]).
 * 
 * Special case: If N=2, we can change one element to match the other, resulting in a range of 0.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (N <= 2) {
        cout << 0 << "\n";
        return;
    }

    sort(A.begin(), A.end());

    // Option 1: Change the largest element to the second largest
    int range1 = A[N - 2] - A[0];
    
    // Option 2: Change the smallest element to the second smallest
    int range2 = A[N - 1] - A[1];

    cout << min(range1, range2) << "\n";
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