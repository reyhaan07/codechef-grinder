#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: FLOW018 - Small Factorial
 * Constraints: 0 <= N <= 20
 * 20! is 2,432,902,008,176,640,000, which fits within a 64-bit signed integer (long long).
 * Time Complexity: O(T * N)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        // Factorial of 0 is 1
        if (n == 0 || n == 1) {
            cout << 1 << "\n";
            continue;
        }

        // Calculate factorial using long long to prevent overflow
        long long factorial = 1;
        for (int i = 2; i <= n; ++i) {
            factorial *= i;
        }

        cout << factorial << "\n";
    }

    return 0;
}