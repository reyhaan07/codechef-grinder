#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef And Operators
 * Approach:
 * Given two integers A and B, we need to compare them and output the corresponding
 * relational operator: '<', '>', or '='.
 * 
 * Constraints:
 * 1 <= T <= 10000
 * 1 <= A, B <= 1000000001
 * 
 * Since A and B can be up to 10^9 + 1, they fit within a standard 32-bit signed integer,
 * but using 'long long' is safer and good practice in competitive programming to 
 * prevent any potential overflow issues during comparisons.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a < b) {
            cout << "<" << "\n";
        } else if (a > b) {
            cout << ">" << "\n";
        } else {
            cout << "=" << "\n";
        }
    }

    return 0;
}