#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice starts with rating X and wants to reach rating Y.
 * Each win increases rating by 8.
 * Let n be the number of games won.
 * We need X + 8 * n >= Y
 * 8 * n >= Y - X
 * n >= (Y - X) / 8
 * Since n must be an integer, n = ceil((Y - X) / 8).
 * 
 * Using integer arithmetic, ceil(a / b) can be calculated as (a + b - 1) / b.
 * Here, n = (Y - X + 7) / 8.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x >= y) {
            cout << 0 << "\n";
        } else {
            int diff = y - x;
            // Calculate ceiling of (diff / 8)
            int games = (diff + 7) / 8;
            cout << games << "\n";
        }
    }

    return 0;
}