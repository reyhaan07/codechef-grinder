#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * An integer M is "imperfect" if:
 * (M % 2 == 0 OR M % 5 == 0) AND NOT (M % 2 == 0 AND M % 5 == 0)
 * This is equivalent to:
 * (M % 2 == 0 XOR M % 5 == 0)
 * 
 * Since N is small (up to 100), we can simply iterate through integers 
 * starting from 0 (or 1) and check the condition.
 * Given the constraints, we can check numbers in the range [1, 200] 
 * to find the closest imperfect number to N.
 */

bool is_imperfect(int m) {
    if (m <= 0) return false;
    bool div2 = (m % 2 == 0);
    bool div5 = (m % 5 == 0);
    return (div2 != div5);
}

void solve() {
    int n;
    cin >> n;
    
    int min_diff = 1000;
    // Check a reasonable range around N to find the closest imperfect number.
    // Since imperfect numbers are frequent (e.g., 2, 4, 5, 6, 8, 10 is not, 12...),
    // the distance will be very small.
    for (int m = 1; m <= 300; ++m) {
        if (is_imperfect(m)) {
            int diff = abs(n - m);
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
    }
    cout << min_diff << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}