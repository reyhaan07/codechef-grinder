#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N problems, each worth X marks.
 * Chef can get either 0 or X marks per problem.
 * Total score Y must be a multiple of X, where the number of problems 
 * solved correctly (Y/X) is between 0 and N inclusive.
 * 
 * Conditions:
 * 1. Y must be divisible by X (Y % X == 0).
 * 2. The number of problems solved (Y / X) must be <= N.
 * 3. Y must be >= 0 (given by constraints).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        // If Y is 0, it's always possible (solve 0 problems).
        // Otherwise, Y must be a multiple of X, and the number of problems
        // solved (Y/X) must not exceed the total number of problems N.
        if (y % x == 0 && (y / x) <= n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}