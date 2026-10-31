#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CREDSCORE
 * Logic: Check if the given credit score X is greater than or equal to 750.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer input X.
    // Even though the problem doesn't explicitly mention multiple test cases,
    // the template instructions suggest handling them if necessary.
    // Given the constraints and problem type, we read X directly.
    
    long long X;
    if (cin >> X) {
        if (X >= 750) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}