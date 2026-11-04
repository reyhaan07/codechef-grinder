#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Literacy Rate
 * The literacy rate is (L / P) * 100.
 * We need to check if (L / P) * 100 >= 75.
 * To avoid floating point precision issues, we can multiply both sides by P:
 * L * 100 >= 75 * P
 * Or simplify the fraction:
 * L / P >= 3 / 4
 * 4 * L >= 3 * P
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long p, l;
        cin >> p >> l;

        // Using the cross-multiplication derived from (L/P) * 100 >= 75
        // 100 * L >= 75 * P
        // This avoids floating point arithmetic and potential precision errors.
        if (100 * l >= 75 * p) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}