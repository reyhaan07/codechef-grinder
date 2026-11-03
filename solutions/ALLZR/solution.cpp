#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let x be the number of times we perform Type 1 operation.
 * Let y be the number of times we perform Type 2 operation.
 * 
 * The operations are:
 * Type 1: A -> A-1, B -> B-2
 * Type 2: B -> B-1, C -> C-3
 * 
 * To make A, B, C zero:
 * A - x = 0  => x = A
 * C - 3y = 0 => y = C / 3
 * 
 * For these to be valid:
 * 1. x must be equal to A (since A starts at A and only Type 1 affects it).
 * 2. y must be equal to C/3 (since C starts at C and only Type 2 affects it).
 * 3. C must be divisible by 3 (since Type 2 subtracts 3 from C).
 * 4. After performing x operations of Type 1 and y operations of Type 2, B must be 0.
 *    Initial B - 2x - y = 0
 *    Substituting x = A and y = C/3:
 *    B - 2A - (C/3) = 0
 *    B = 2A + C/3
 * 
 * Constraints:
 * A, B, C >= 1.
 * Since x and y represent counts of operations, they must be non-negative.
 * Since A, B, C >= 1, x = A >= 1 and y = C/3 >= 0.
 * The condition C % 3 == 0 is necessary.
 */

void solve() {
    long long A, B, C;
    cin >> A >> B >> C;

    if (C % 3 != 0) {
        cout << "No" << "\n";
        return;
    }

    long long x = A;
    long long y = C / 3;

    if (B == 2 * x + y) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
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