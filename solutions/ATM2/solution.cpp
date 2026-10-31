#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: ATM Machine
 * Logic:
 * We maintain the current balance K in the ATM.
 * For each person i with requested amount A_i:
 * 1. If K >= A_i, the person gets the money, and we update K = K - A_i.
 *    We record '1' for this person.
 * 2. If K < A_i, the person gets nothing.
 *    We record '0' for this person.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the result string.
 */

void solve() {
    int N;
    long long K;
    if (!(cin >> N >> K)) return;
    
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    string result = "";
    for (int i = 0; i < N; ++i) {
        if (K >= A[i]) {
            result += '1';
            K -= A[i];
        } else {
            result += '0';
        }
    }
    
    cout << result << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}