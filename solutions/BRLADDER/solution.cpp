#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The cities are structured as follows:
 * 1. Horizontal roads: (2i+1) - (2i+2) for i >= 0.
 *    This means: (1,2), (3,4), (5,6), ...
 *    Condition: |a - b| == 1 AND (min(a, b) is odd).
 * 
 * 2. Vertical roads (Odd): (2i+1) - (2i+3) for i >= 0.
 *    This means: (1,3), (3,5), (5,7), ...
 *    Condition: |a - b| == 2 AND (a is odd AND b is odd).
 * 
 * 3. Vertical roads (Even): (2i) - (2i+2) for i >= 1.
 *    This means: (2,4), (4,6), (6,8), ...
 *    Condition: |a - b| == 2 AND (a is even AND b is even).
 * 
 * Combining these:
 * - If |a - b| == 1:
 *     The pair is connected if the smaller number is odd.
 *     Example: (1,2) -> 1 is odd (YES), (2,3) -> 2 is even (NO).
 * - If |a - b| == 2:
 *     The pair is connected if both are odd or both are even.
 *     This is equivalent to saying (a % 2 == b % 2).
 * - Otherwise:
 *     No road exists.
 */

void solve() {
    long long a, b;
    cin >> a >> b;

    long long diff = abs(a - b);

    if (diff == 1) {
        // Check if the smaller one is odd
        if (min(a, b) % 2 != 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    } else if (diff == 2) {
        // Check if both have the same parity
        if (a % 2 == b % 2) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (!(cin >> q)) return 0;
    while (q--) {
        solve();
    }
    return 0;
}