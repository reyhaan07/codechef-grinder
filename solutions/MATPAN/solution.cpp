#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given the prices of 26 lowercase English letters.
 * We are given a string S.
 * We need to make S a pangram (containing all letters 'a' through 'z') by adding letters.
 * To minimize the cost, we identify which letters are missing from the string S.
 * For every missing letter, we add its price to the total cost.
 * 
 * Complexity:
 * Time: O(T * (N + 26)), where N is the length of the string.
 * Space: O(26) to store prices and presence of characters.
 */

void solve() {
    vector<long long> prices(26);
    for (int i = 0; i < 26; ++i) {
        cin >> prices[i];
    }

    string s;
    cin >> s;

    // Track which letters are present in the string
    vector<bool> present(26, false);
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            present[c - 'a'] = true;
        }
    }

    // Calculate total cost for missing letters
    long long total_cost = 0;
    for (int i = 0; i < 26; ++i) {
        if (!present[i]) {
            total_cost += prices[i];
        }
    }

    cout << total_cost << "\n";
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