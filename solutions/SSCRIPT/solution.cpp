#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to find if there exists a substring of '*' of length at least K.
 * We can iterate through the string and maintain a counter of consecutive '*'.
 * If the counter reaches K, we output "YES". If we finish the string without
 * reaching K, we output "NO".
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(N) to store the string.
 */

void solve() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    int consecutive_stars = 0;
    bool found = false;

    for (int i = 0; i < N; ++i) {
        if (S[i] == '*') {
            consecutive_stars++;
            if (consecutive_stars >= K) {
                found = true;
                break;
            }
        } else {
            consecutive_stars = 0;
        }
    }

    if (found) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}