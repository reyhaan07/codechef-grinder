#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        // Total days to wait = K weeks * 7 days/week = 7 * K days.
        // Remaining days = Total days - days already passed (X).
        int total_days = 7 * k;
        cout << total_days - x << "\n";
    }

    return 0;
}