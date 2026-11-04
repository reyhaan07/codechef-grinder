#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have X and Y.
 * Operations: X = X + 1 OR Y = Y + 2.
 * 
 * Case 1: X >= Y
 * Since we can only increase X by 1 or Y by 2, if X >= Y, 
 * we must increase X until it matches Y.
 * However, Y can only increase by 2. If X > Y, we need to make them equal.
 * If X == Y, 0 operations.
 * If X > Y:
 *   - If (X - Y) is even, we can increase Y by 2 exactly (X-Y)/2 times.
 *   - If (X - Y) is odd, we increase Y by 2 until it's Y+1, then increase X by 1.
 *   Actually, it's simpler:
 *   If X >= Y:
 *     The difference is (X - Y). We need to add to Y.
 *     If (X - Y) is even, we add 2, (X-Y)/2 times.
 *     If (X - Y) is odd, we add 2, (X-Y-1)/2 times to reach Y+1, then add 1 to X.
 *     Total operations: (X - Y) + (X - Y) % 2? No.
 *     Let's re-evaluate:
 *     If X >= Y:
 *       We need to reach a common value Z >= X.
 *       Since we can only add 2 to Y, Y will always have the same parity.
 *       If X and Y have the same parity, we just add (X-Y)/2 to Y.
 *       If X and Y have different parity, we add 1 to X (1 op), now X and Y have same parity, 
 *       then add (X+1-Y)/2 to Y.
 *       Total: 1 + (X + 1 - Y) / 2.
 */

void solve() {
    long long X, Y;
    cin >> X >> Y;

    if (X == Y) {
        cout << 0 << "\n";
    } else if (X > Y) {
        // We need to increase Y to reach X.
        // Since Y only increases by 2, Y will always be Y + 2k.
        // We need Y + 2k = X. This is only possible if (X-Y) is even.
        // If (X-Y) is odd, we must increase X by 1 first.
        if ((X - Y) % 2 == 0) {
            cout << (X - Y) / 2 << "\n";
        } else {
            cout << (X - Y + 1) / 2 + 1 << "\n";
        }
    } else {
        // Y > X. We can increase X by 1 until it reaches Y.
        cout << (Y - X) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}