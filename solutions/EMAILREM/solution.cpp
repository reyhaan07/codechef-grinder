#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Email Reminders
 * Logic: The number of users to send emails to is the total number of users (N)
 * minus the number of users who opted out (U).
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single line of input per test case.
    // Given the constraints and standard competitive programming practices,
    // we read N and U and output the difference.
    long long N, U;
    if (cin >> N >> U) {
        cout << (N - U) << "\n";
    }

    return 0;
}