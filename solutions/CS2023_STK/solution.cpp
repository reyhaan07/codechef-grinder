#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CodeChef Streak (CS2023_STK)
 * Approach:
 * For each person, we iterate through their daily problem counts.
 * We maintain a 'current_streak' counter that resets to 0 whenever a day has 0 problems.
 * We maintain a 'max_streak' variable to track the highest streak encountered.
 * Finally, we compare the max_streak of Om and Addy.
 * 
 * Time Complexity: O(N) per test case, where N is the number of days.
 * Space Complexity: O(N) to store the input arrays (or O(1) if processed on the fly).
 */

int get_max_streak(int n, const vector<int>& arr) {
    int max_s = 0;
    int current_s = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            current_s++;
            if (current_s > max_s) {
                max_s = current_s;
            }
        } else {
            current_s = 0;
        }
    }
    return max_s;
}

void solve() {
    int n;
    cin >> n;
    vector<int> om(n), addy(n);
    for (int i = 0; i < n; ++i) cin >> om[i];
    for (int i = 0; i < n; ++i) cin >> addy[i];

    int om_max = get_max_streak(n, om);
    int addy_max = get_max_streak(n, addy);

    if (om_max > addy_max) {
        cout << "Om" << "\n";
    } else if (addy_max > om_max) {
        cout << "Addy" << "\n";
    } else {
        cout << "Draw" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}