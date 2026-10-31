#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two strings S1 and S2 of equal length containing lowercase letters and '?'.
 * '?' can be replaced by any lowercase letter.
 * 
 * Minimal difference:
 * For each position i:
 * - If S1[i] == '?' or S2[i] == '?', we can always make them equal (e.g., replace both with 'a').
 * - If both are letters and S1[i] != S2[i], they must differ.
 * - If both are letters and S1[i] == S2[i], they match.
 * So, min_diff = count of positions where both are letters and S1[i] != S2[i].
 * 
 * Maximal difference:
 * For each position i:
 * - If S1[i] == '?' or S2[i] == '?', we can always make them differ (e.g., if S1[i] is 'a', make S2[i] 'b').
 * - If both are letters and S1[i] != S2[i], they must differ.
 * - If both are letters and S1[i] == S2[i], they match.
 * So, max_diff = count of positions where (S1[i] != S2[i]) OR (S1[i] == '?' OR S2[i] == '?').
 */

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    
    int min_diff = 0;
    int max_diff = 0;
    
    int n = s1.length();
    for (int i = 0; i < n; ++i) {
        if (s1[i] == '?' || s2[i] == '?') {
            // For min_diff, we can match them, so no increment.
            // For max_diff, we can force them to be different, so increment.
            max_diff++;
        } else {
            // Both are characters.
            if (s1[i] != s2[i]) {
                min_diff++;
                max_diff++;
            }
        }
    }
    
    cout << min_diff << " " << max_diff << "\n";
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