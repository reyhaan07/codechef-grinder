#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice wants a name that shares no characters with S_B.
 * Bob wants a name that shares no characters with S_A.
 * 
 * Let the chosen name be a single character 'c'.
 * Alice is happy if 'c' is not in S_B.
 * Bob is happy if 'c' is not in S_A.
 * 
 * Therefore, a valid name exists if there is at least one character 'c' (from 'a' to 'z')
 * such that 'c' is not present in S_A AND 'c' is not present in S_B.
 * 
 * This is equivalent to checking if the union of the sets of characters present in 
 * S_A and S_B has a size less than 26. If the union size is 26, every possible 
 * character is used by either Alice or Bob, making it impossible to find a 
 * character that satisfies both.
 */

void solve() {
    int N, M;
    cin >> N >> M;
    string SA, SB;
    cin >> SA >> SB;

    // Use a boolean array to track characters present in either string
    vector<bool> present(26, false);

    for (char c : SA) {
        present[c - 'a'] = true;
    }
    for (char c : SB) {
        present[c - 'a'] = true;
    }

    // Check if there is any character not present in either string
    bool found = false;
    for (int i = 0; i < 26; ++i) {
        if (!present[i]) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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