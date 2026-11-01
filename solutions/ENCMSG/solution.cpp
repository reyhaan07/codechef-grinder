#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * 1. Step 1: Swap adjacent characters in pairs (0,1), (2,3), etc.
 *    If N is odd, the last character remains unchanged.
 * 2. Step 2: Replace each character 'c' with its mirror in the alphabet.
 *    'a' (0) -> 'z' (25)
 *    'b' (1) -> 'y' (24)
 *    Formula: new_char = 'z' - (old_char - 'a')
 * 
 * Complexity:
 * Time: O(N) per test case, where N <= 100. Total O(T * N).
 * Space: O(N) to store the string.
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Step 1: Swap pairs
    for (int i = 0; i + 1 < n; i += 2) {
        swap(s[i], s[i + 1]);
    }

    // Step 2: Replace characters
    // 'a' is 97, 'z' is 122
    // Mapping: char c -> 'z' - (c - 'a')
    for (int i = 0; i < n; ++i) {
        s[i] = 'z' - (s[i] - 'a');
    }

    cout << s << "\n";
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