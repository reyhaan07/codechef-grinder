#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a string S of length N. We can rearrange the characters.
 * We want to know if we can make the first and last characters equal.
 * 
 * If we want the first and last characters to be equal to some character 'c',
 * we need at least two occurrences of 'c' in the string S.
 * 
 * If there exists any character that appears 2 or more times in the string,
 * we can place one instance at the start and one at the end, and fill the 
 * remaining N-2 positions with the rest of the characters.
 * 
 * If no character appears 2 or more times, then every character in the string
 * is unique. In this case, it is impossible to have the first and last 
 * characters be the same.
 * 
 * Therefore, the condition is simply: Does any character appear at least twice?
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    // Count frequencies of each character
    vector<int> freq(26, 0);
    for (char c : S) {
        freq[c - 'a']++;
    }

    // Check if any character appears >= 2 times
    bool possible = false;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] >= 2) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}