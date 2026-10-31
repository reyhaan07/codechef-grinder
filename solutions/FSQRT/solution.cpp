#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: FSQRT - Finding Square Roots
 * The task is to find the integer square root of a given number N.
 * Using the built-in sqrt() function from <cmath> is efficient and 
 * sufficient for the given constraints.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long n;
        if (cin >> n) {
            // sqrt() returns a double, casting to long long 
            // effectively rounds down to the nearest integer.
            long long result = static_cast<long long>(sqrt(n));
            cout << result << "\n";
        }
    }

    return 0;
}