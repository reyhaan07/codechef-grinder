#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The degree of a polynomial is the highest power 'i' such that the coefficient A_i is non-zero.
 * Given N terms, the powers range from 0 to N-1.
 * We need to find the largest index 'i' such that A[i] != 0.
 * 
 * Complexity:
 * Time: O(N) per test case, where N is the number of terms.
 * Space: O(N) to store the coefficients.
 */

void solve() {
    int N;
    if (!(cin >> N)) return;
    
    vector<long long> A(N);
    int degree = 0;
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        // If the current coefficient is non-zero, update the degree to the current index.
        // Since we iterate from 0 to N-1, the last index with a non-zero 
        // coefficient will be the highest power.
        if (A[i] != 0) {
            degree = i;
        }
    }
    
    cout << degree << "\n";
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