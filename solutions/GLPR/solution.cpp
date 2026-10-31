#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef buys the metal frame if Y <= 2 * X.
 * Otherwise, Chef buys the plastic frame.
 * 
 * Constraints:
 * 1 <= X, Y <= 2000
 * Since the maximum value of 2 * X is 4000, standard 'int' is sufficient.
 * However, using 'long long' is safe practice in competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the input format,
    // but standard competitive programming practice often involves handling multiple test cases.
    // Given the problem description format, we read X and Y directly.
    long long X, Y;
    if (cin >> X >> Y) {
        // Condition: Metal if Y <= 2 * X
        if (Y <= 2 * X) {
            cout << "METAL" << "\n";
        } else {
            cout << "PLASTIC" << "\n";
        }
    }

    return 0;
}