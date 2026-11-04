#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a string S of length 4.
 * We need to check if S[0] == S[2] and S[1] == S[3] (using 0-indexing).
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    // The problem description implies a single string input, 
    // but standard competitive programming practice often involves 
    // reading until EOF or a specific count. Given the problem format:
    if (cin >> s) {
        // Check the echo condition:
        // S[0] is 1st char, S[2] is 3rd char
        // S[1] is 2nd char, S[3] is 4th char
        if (s[0] == s[2] && s[1] == s[3]) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}