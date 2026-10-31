#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Gold Coins 101
 * Logic: 
 * Chef receives A coins if he wins (X > Y).
 * Chef receives B coins if he loses (X < Y).
 * Given X != Y, we simply compare X and Y to determine the outcome.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format.
    // However, if the platform expects multiple test cases, the structure is ready.
    // Given the constraints and description, we read the four integers.
    long long A, B, X, Y;
    if (cin >> A >> B >> X >> Y) {
        if (X > Y) {
            // Chef wins
            cout << A << "\n";
        } else {
            // Chef loses
            cout << B << "\n";
        }
    }

    return 0;
}