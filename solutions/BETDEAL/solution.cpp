#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Store 1: Original price = 100. Discount = A%. Final price = 100 - (A/100 * 100) = 100 - A.
 * Store 2: Original price = 200. Discount = B%. Final price = 200 - (B/100 * 200) = 200 - 2*B.
 * 
 * We need to compare (100 - A) and (200 - 2*B).
 * - If (100 - A) < (200 - 2*B), output FIRST.
 * - If (100 - A) > (200 - 2*B), output SECOND.
 * - If (100 - A) == (200 - 2*B), output BOTH.
 * 
 * Constraints: 1 <= A, B <= 100.
 * The values fit easily within standard integer types.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int price1 = 100 - a;
        int price2 = 200 - 2 * b;

        if (price1 < price2) {
            cout << "FIRST" << "\n";
        } else if (price2 < price1) {
            cout << "SECOND" << "\n";
        } else {
            cout << "BOTH" << "\n";
        }
    }

    return 0;
}