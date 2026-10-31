#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: FLOW002 - Find Remainder
 * The problem asks for the remainder of A divided by B.
 * Constraints: 1 <= T <= 1000, 1 <= A, B <= 10000.
 * Since A and B fit within standard integer types, 'int' is sufficient,
 * but 'long long' is used for robustness as per instructions.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        if (cin >> a >> b) {
            // The remainder operator '%' in C++ returns the remainder of the division.
            // Given constraints 1 <= A, B <= 10000, no division by zero will occur.
            cout << (a % b) << "\n";
        }
    }

    return 0;
}