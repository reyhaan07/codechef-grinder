#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Bob has X rupees.
 * Cost of 1kg apples = A.
 * Cost of 1kg oranges = B.
 * Total cost for 1kg of each = A + B.
 * Bob can buy if X >= A + B.
 * 
 * Constraints:
 * 1 <= X, A, B <= 10^5.
 * The sum A + B will be at most 2 * 10^5, which fits in a standard 32-bit integer.
 * However, using long long is a safe practice in competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, A, B;
    
    // Reading input
    if (!(cin >> X)) return 0;
    if (!(cin >> A >> B)) return 0;

    // Logic: Check if total cost is less than or equal to available money
    if (X >= (A + B)) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}