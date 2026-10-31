#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The speed limit is 40 km/hr.
 * If speed S > 40, Alice is fined (YES).
 * If speed S <= 40, Alice is not fined (NO).
 * Constraints: 1 <= S <= 50.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer input per run,
    // but standard competitive programming practice often involves 
    // handling test cases if specified. Given the problem format:
    int S;
    if (cin >> S) {
        if (S > 40) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}