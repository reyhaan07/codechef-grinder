#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A string S of length 3 is "cute" if:
 * 1. S[0] == S[2]
 * 2. S[1] == 'w'
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        // Check the conditions for a "cute" string
        if (s.length() == 3 && s[0] == s[2] && s[1] == 'w') {
            cout << "Cute" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}