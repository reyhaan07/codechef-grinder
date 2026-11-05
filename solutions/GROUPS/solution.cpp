#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A group of friends is defined as a contiguous block of '1's.
 * We need to count how many such contiguous blocks exist in the string S.
 * 
 * Logic:
 * A new group starts whenever we encounter a '1' that is either at the 
 * beginning of the string or is preceded by a '0'.
 * 
 * Example: 01011011
 * - Index 0: '0' (no group)
 * - Index 1: '1', previous was '0' (start of group 1)
 * - Index 2: '0'
 * - Index 3: '1', previous was '0' (start of group 2)
 * - Index 4: '1', previous was '1' (continue group 2)
 * - Index 5: '0'
 * - Index 6: '1', previous was '0' (start of group 3)
 * - Index 7: '1', previous was '1' (continue group 3)
 * Total groups = 3.
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(N) to store the string.
 */

void solve() {
    string s;
    cin >> s;
    
    int groups = 0;
    int n = s.length();
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            // If this is the start of a group, increment count
            // A group starts if it's the first character or the previous was '0'
            if (i == 0 || s[i - 1] == '0') {
                groups++;
            }
        }
    }
    
    cout << groups << "\n";
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