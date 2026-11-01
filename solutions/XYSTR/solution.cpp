#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a string of 'x' (girls) and 'y' (boys).
 * We need to form pairs of adjacent students (i, i+1) such that one is 'x' and the other is 'y'.
 * Each student can be in at most one pair.
 * 
 * This is a classic greedy problem. We iterate through the string from left to right.
 * If we find a pair (S[i], S[i+1]) that consists of different characters, we pair them up
 * and skip the next index (i+1) because those students are now occupied.
 * 
 * Greedy Strategy:
 * Iterate i from 0 to N-2:
 *   If S[i] != S[i+1]:
 *     Increment count
 *     i++ (skip the next student)
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(N) to store the string.
 */

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int pairs = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i + 1]) {
            pairs++;
            // Skip the next student as they are now paired
            i++;
        }
    }
    
    cout << pairs << "\n";
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