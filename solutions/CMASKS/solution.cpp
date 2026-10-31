#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Disposable masks: Cost X per day. For 100 days, total cost = X * 100.
 * Cloth masks: Cost Y for 10 days. For 100 days, we need 100/10 = 10 masks.
 * Total cost for cloth masks = Y * 10.
 * 
 * Decision logic:
 * If (Y * 10) <= (X * 100), Chef chooses CLOTH (due to eco-friendly tie-break).
 * Otherwise, Chef chooses DISPOSABLE.
 * 
 * Constraints:
 * T <= 5000
 * 1 <= X < Y <= 100
 * Calculations will fit within standard integer types, but long long is used for safety.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long cost_disposable = x * 100;
        long long cost_cloth = y * 10;

        // If cloth cost is less than or equal to disposable, choose CLOTH.
        // The problem states: "In case there is a tie... choose the cloth masks."
        if (cost_cloth <= cost_disposable) {
            cout << "CLOTH" << "\n";
        } else {
            cout << "DISPOSABLE" << "\n";
        }
    }

    return 0;
}