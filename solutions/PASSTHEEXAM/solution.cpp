#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef passes if:
 * 1. Total score (A + B + C) >= 100
 * 2. Each section score (A, B, C) >= 10
 * 
 * Constraints:
 * 0 <= A, B, C <= 100
 * T <= 1000
 * 
 * Time Complexity: O(T) - We process each test case in constant time.
 * Space Complexity: O(1) - We use a constant amount of extra space.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        // Condition 1: Total score >= 100
        // Condition 2: Each section >= 10
        if ((a + b + c >= 100) && (a >= 10) && (b >= 10) && (c >= 10)) {
            cout << "PASS" << "\n";
        } else {
            cout << "FAIL" << "\n";
        }
    }

    return 0;
}