#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given A and B. We want to reach a state where A % 3 == 0 or B % 3 == 0.
 * Let a = A % 3 and b = B % 3.
 * 
 * Possible states (a, b):
 * 1. If a == 0 or b == 0: 0 operations.
 * 2. If a == b:
 *    Operation: A = |A-B| => a = |a-b| % 3 = 0.
 *    So, 1 operation.
 * 3. If a != b and neither is 0:
 *    Possible pairs (a, b) are (1, 2) or (2, 1).
 *    - If (1, 2):
 *      Op 1: A = |A-B| => a = |1-2| = 1. New state (1, 2).
 *      Op 1: B = |A-B| => b = |1-2| = 1. New state (1, 1).
 *      From (1, 1), we need 1 more operation to reach 0. Total = 2.
 *    - If (2, 1):
 *      Op 1: A = |A-B| => a = |2-1| = 1. New state (1, 1).
 *      Op 1: B = |A-B| => b = |2-1| = 1. New state (2, 1).
 *      From (1, 1), we need 1 more operation to reach 0. Total = 2.
 * 
 * Conclusion:
 * - If A % 3 == 0 or B % 3 == 0: 0
 * - If A % 3 == B % 3: 1
 * - Otherwise: 2
 */

void solve() {
    long long A, B;
    cin >> A >> B;

    if (A % 3 == 0 || B % 3 == 0) {
        cout << 0 << "\n";
    } else if (A % 3 == B % 3) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
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