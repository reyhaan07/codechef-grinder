#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The month has 30 days.
 * Day 1 is Monday.
 * Weekdays:
 * Mon: 1, 8, 15, 22, 29
 * Tue: 2, 9, 16, 23, 30
 * Wed: 3, 10, 17, 24
 * Thu: 4, 11, 18, 25
 * Fri: 5, 12, 19, 26
 * Sat: 6, 13, 20, 27
 * Sun: 7, 14, 21, 28
 * 
 * Holidays are Saturdays (6, 13, 20, 27), Sundays (7, 14, 21, 28),
 * and the given N festival days.
 * We need to count the size of the union of these sets.
 */

void solve() {
    int N;
    cin >> N;
    
    // Use a boolean array to track holidays (days 1 to 30)
    vector<bool> is_holiday(31, false);
    
    // Mark Saturdays and Sundays
    // Saturdays: 6, 13, 20, 27
    // Sundays: 7, 14, 21, 28
    int weekends[] = {6, 13, 20, 27, 7, 14, 21, 28};
    for (int day : weekends) {
        is_holiday[day] = true;
    }
    
    // Mark festival days
    for (int i = 0; i < N; ++i) {
        int festival_day;
        cin >> festival_day;
        is_holiday[festival_day] = true;
    }
    
    // Count total true values in the array
    int count = 0;
    for (int i = 1; i <= 30; ++i) {
        if (is_holiday[i]) {
            count++;
        }
    }
    
    cout << count << "\n";
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