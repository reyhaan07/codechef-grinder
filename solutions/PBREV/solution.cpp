#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A problem is 'good' if every judge gives a score > 4.
 * We need to iterate through the N scores for each test case.
 * If any score is <= 4, the problem is not 'good' (NO).
 * If all scores are > 4, the problem is 'good' (YES).
 * 
 * Complexity:
 * Time Complexity: O(N) per test case, O(Sum of N) total. Given constraints, this is well within 1s.
 * Space Complexity: O(1) auxiliary space if we process scores on the fly.
 */

void solve() {
    int n;
    cin >> n;
    bool is_good = true;
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        // If any judge gives a score <= 4, the problem is not good.
        if (score <= 4) {
            is_good = false;
        }
    }

    if (is_good) {
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