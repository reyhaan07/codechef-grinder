#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given 7 integers representing days (1 for sunny, 0 for rainy).
 * A week is "Good" if the number of sunny days > number of rainy days.
 * Since there are 7 days total, sunny days + rainy days = 7.
 * Let S be the number of sunny days and R be the number of rainy days.
 * S + R = 7.
 * The condition S > R is equivalent to S > 7 - S, which simplifies to 2S > 7, or S > 3.5.
 * Thus, we simply need to count the number of 1s and check if the count is >= 4.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int sunny_count = 0;
        for (int i = 0; i < 7; ++i) {
            int day;
            cin >> day;
            if (day == 1) {
                sunny_count++;
            }
        }
        
        // A week has 7 days. If sunny days > rainy days, 
        // then sunny days must be at least 4.
        if (sunny_count > 3) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}