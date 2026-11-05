#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have 4 problems with difficulty levels A1, A2, A3, A4.
 * A problem set must have at least 2 problems, and all problems in a set must have distinct difficulties.
 * Since we have 4 problems total:
 * 1. If all 4 are distinct (e.g., 1, 2, 3, 4): We can form 2 sets of 2 (e.g., {1, 2} and {3, 4}). Result: 2.
 * 2. If 3 are the same and 1 is different (e.g., 5, 5, 5, 4): We can form 1 set of 2 (e.g., {5, 4}). The remaining two 5s cannot form a set. Result: 1.
 * 3. If 2 are the same and 2 are different (e.g., 5, 5, 4, 3): We can form 1 set of 2 (e.g., {5, 4}) and the remaining {5, 3} can form another set. Result: 2.
 * 4. If 2 are the same and the other 2 are also the same (e.g., 5, 5, 4, 4): We can form 2 sets of 2 (e.g., {5, 4} and {5, 4}). Result: 2.
 * 5. If 4 are the same (e.g., 2, 2, 2, 2): No set can be formed. Result: 0.
 * 
 * Logic based on frequency:
 * Let 'max_freq' be the maximum number of times any single difficulty appears.
 * - If max_freq == 4: Result 0.
 * - If max_freq == 3: Result 1.
 * - If max_freq == 2: Result 2.
 * - If max_freq == 1: Result 2.
 */

void solve() {
    vector<int> a(4);
    map<int, int> counts;
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
        counts[a[i]]++;
    }

    int max_freq = 0;
    for (auto const& [val, count] : counts) {
        max_freq = max(max_freq, count);
    }

    if (max_freq == 4) {
        cout << 0 << "\n";
    } else if (max_freq == 3) {
        cout << 1 << "\n";
    } else {
        // max_freq is 1 or 2
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}