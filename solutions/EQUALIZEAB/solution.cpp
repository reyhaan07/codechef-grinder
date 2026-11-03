#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We start with A and B. In one operation, we change (A, B) to (A+X, B-X) or (A-X, B+X).
 * Let the number of operations of the first type be k1 and the second type be k2.
 * The final values will be:
 * A_final = A + (k1 - k2) * X
 * B_final = B - (k1 - k2) * X
 * 
 * We want A_final = B_final:
 * A + (k1 - k2) * X = B - (k1 - k2) * X
 * A - B = -2 * (k1 - k2) * X
 * B - A = 2 * (k1 - k2) * X
 * 
 * Let K = k1 - k2. We need:
 * B - A = 2 * K * X
 * This means (B - A) must be divisible by (2 * X).
 * 
 * Since K can be any integer (positive, negative, or zero), 
 * the condition is simply that (B - A) is a multiple of (2 * X).
 * Note: If A = B, then B - A = 0, which is divisible by any 2*X (0 = 2*0*X), so YES.
 */

void solve() {
    long long A, B, X;
    if (!(cin >> A >> B >> X)) return;

    long long diff = B - A;
    
    // We need diff to be divisible by 2*X
    // Using absolute value to handle both A > B and B > A cases
    if (abs(diff) % (2 * X) == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}