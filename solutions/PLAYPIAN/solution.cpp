#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The log consists of a string of length N (even).
 * Each day, both A and B play exactly once.
 * This means every pair of characters (s[2*i], s[2*i+1]) must contain
 * exactly one 'A' and one 'B'.
 * 
 * If s[2*i] == s[2*i+1], then one person played twice on that day,
 * which is invalid.
 * If s[2*i] != s[2*i+1], then one person played and the other played,
 * which is valid.
 */

void solve() {
    string s;
    cin >> s;
    
    bool possible = true;
    int n = s.length();
    
    // Check every pair (day)
    for (int i = 0; i < n; i += 2) {
        if (s[i] == s[i + 1]) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "yes" << "\n";
    } else {
        cout << "no" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}