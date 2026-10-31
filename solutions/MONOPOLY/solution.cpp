#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A company has a monopolistic advantage if its revenue is strictly greater 
 * than the sum of the other two companies' revenues.
 * 
 * Let the revenues be R1, R2, R3.
 * Company 1 has advantage if: R1 > R2 + R3
 * Company 2 has advantage if: R2 > R1 + R3
 * Company 3 has advantage if: R3 > R1 + R2
 * 
 * We need to check if any of these conditions are true.
 * Constraints are small (1 <= R <= 10), so standard integer types are sufficient.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long r1, r2, r3;
        cin >> r1 >> r2 >> r3;

        // Check if any company satisfies the condition
        if (r1 > (r2 + r3) || r2 > (r1 + r3) || r3 > (r1 + r2)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}