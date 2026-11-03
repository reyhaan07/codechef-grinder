#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three integers X, Y, Z.
 * An arithmetic progression (AP) satisfies the condition: Y - X = Z - Y,
 * which simplifies to 2 * Y = X + Z.
 * 
 * We want to find the minimum number of operations (changing one of X, Y, or Z)
 * to satisfy this condition.
 * 
 * Possible outcomes:
 * 0 operations: If 2 * Y == X + Z, the sequence is already an AP.
 * 1 operation: If we can change one variable to satisfy the condition.
 *    - Change X: New X = 2 * Y - Z. Since we can change to any integer, this is always possible.
 *    - Change Y: New Y = (X + Z) / 2. This is possible if (X + Z) is even.
 *    - Change Z: New Z = 2 * Y - X. This is always possible.
 * 2 operations: If we cannot satisfy it in 0 or 1, we can always satisfy it in 1 operation 
 *    (as shown above, changing X or Z always works).
 * 
 * Therefore, the answer is 0 if 2*Y == X + Z, 1 otherwise.
 */

void solve() {
    long long X, Y, Z;
    cin >> X >> Y >> Z;

    // Check if it is already an AP
    if (2 * Y == X + Z) {
        cout << 0 << "\n";
    } else {
        // We can always change one number (X, Y, or Z) to make it an AP.
        // For example, change Z to (2*Y - X).
        cout << 1 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}