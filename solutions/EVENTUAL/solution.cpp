#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Count the frequency of each character in the string
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Check if every character appears an even number of times
    bool possible = true;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}