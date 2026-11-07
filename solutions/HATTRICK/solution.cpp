#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: HATTRICK
 * A hattrick is defined as three consecutive 'W's in the sequence of 6 balls.
 * We need to check if any window of size 3 in the sequence [A, B, C, D, E, F]
 * consists entirely of 'W'.
 */

void solve() {
    vector<string> balls(6);
    for (int i = 0; i < 6; ++i) {
        cin >> balls[i];
    }

    bool hattrick = false;
    // Check all possible windows of size 3:
    // (0,1,2), (1,2,3), (2,3,4), (3,4,5)
    for (int i = 0; i <= 3; ++i) {
        if (balls[i] == "W" && balls[i + 1] == "W" && balls[i + 2] == "W") {
            hattrick = true;
            break;
        }
    }

    if (hattrick) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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