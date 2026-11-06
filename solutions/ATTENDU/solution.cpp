#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total days in semester = 120.
 * Required attendance = 75% of 120 = 0.75 * 120 = 90 days.
 * 
 * Chef has attended some number of days 'present_count' out of 'N' days.
 * Remaining days in the semester = 120 - N.
 * Even if Chef attends all remaining days, his total attendance will be:
 * total_possible = present_count + (120 - N).
 * 
 * Chef passes if total_possible >= 90.
 */

void solve() {
    int N;
    cin >> N;
    string B;
    cin >> B;

    int present_count = 0;
    for (char c : B) {
        if (c == '1') {
            present_count++;
        }
    }

    // Calculate maximum possible attendance if he attends all remaining days
    int remaining_days = 120 - N;
    int total_possible = present_count + remaining_days;

    if (total_possible >= 90) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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