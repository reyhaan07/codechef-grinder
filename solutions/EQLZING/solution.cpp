#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have two numbers A and B.
 * In one operation, we can choose an integer d and:
 * 1. A = A + d, B = B - d  => New sum = (A+d) + (B-d) = A + B
 * 2. A = A - d, B = B + d  => New sum = (A-d) + (B+d) = A + B
 * 
 * In both cases, the sum of A and B remains invariant (A + B = constant).
 * If we want to make A and B equal, let the final value be X.
 * Then A_final = X and B_final = X.
 * The sum must be X + X = 2X.
 * This implies that the sum of A and B must be an even number for them to be equal.
 * 
 * Additionally, if A and B are already equal, the sum is 2A, which is even.
 * If A and B are not equal, we can change their difference by 2*d in one operation.
 * Since the difference changes by an even amount, the parity of the difference remains constant.
 * If |A - B| is odd, it will always remain odd, so it can never reach 0.
 * If |A - B| is even, it can reach 0.
 * 
 * Therefore, the condition is simply: (A + B) % 2 == 0.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // If the sum is even, they can be made equal.
        // If the sum is odd, they cannot.
        if ((a + b) % 2 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}