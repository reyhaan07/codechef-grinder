#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef likes days that are neither the minimum nor the maximum temperature.
 * 1. Find the global minimum (min_val) and global maximum (max_val) of the array.
 * 2. Count how many elements A[i] satisfy: min_val < A[i] < max_val.
 * 3. If all elements are the same, min_val == max_val, so no elements satisfy the condition.
 * 4. If there are only two distinct values, min_val < max_val, but no elements exist between them.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    
    if (N == 0) {
        cout << 0 << "\n";
        return;
    }

    int min_val = 101;
    int max_val = 0;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] < min_val) min_val = A[i];
        if (A[i] > max_val) max_val = A[i];
    }

    // If all temperatures are the same, or only two distinct values exist,
    // there are no values strictly between min and max.
    if (min_val == max_val) {
        cout << 0 << "\n";
        return;
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] > min_val && A[i] < max_val) {
            count++;
        }
    }

    cout << count << "\n";
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