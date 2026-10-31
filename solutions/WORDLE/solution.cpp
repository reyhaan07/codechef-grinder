#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: WORDLE
 * Approach:
 * We are given two strings S and T of length 5.
 * We need to construct a string M of length 5 where:
 * M[i] = 'G' if S[i] == T[i]
 * M[i] = 'B' if S[i] != T[i]
 * 
 * Time Complexity: O(T * L) where T is the number of test cases and L is the length of the string (5).
 * Space Complexity: O(L) to store the result string.
 */

void solve() {
    string S, T;
    cin >> S >> T;
    
    string M = "";
    for (int i = 0; i < 5; ++i) {
        if (S[i] == T[i]) {
            M += 'G';
        } else {
            M += 'B';
        }
    }
    cout << M << "\n";
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