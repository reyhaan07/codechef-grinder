#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - N=1: Always YES.
 * - N=2: Only YES if A[0] <= A[1].
 * - N=3: We can swap (0, 2). The middle element A[1] is fixed.
 *        We can reach (A[0], A[1], A[2]) and (A[2], A[1], A[0]).
 *        Check if either is sorted.
 * - N>=4: Always YES.
 */

bool is_sorted(const vector<int>& A) {
    for (size_t i = 0; i + 1 < A.size(); ++i) {
        if (A[i] > A[i + 1]) return false;
    }
    return true;
}

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    if (N == 1) {
        cout << "YES" << "\n";
    } else if (N == 2) {
        if (A[0] <= A[1]) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    } else if (N == 3) {
        // Can swap A[0] and A[2]
        if (is_sorted(A)) {
            cout << "YES" << "\n";
        } else {
            swap(A[0], A[2]);
            if (is_sorted(A)) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    } else {
        cout << "YES" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}