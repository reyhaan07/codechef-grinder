#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Summer Time
 * Logic: Mamalesh drinks mango lassi if temperature X > 35.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X, 
    // but standard competitive programming practice often involves 
    // checking if multiple test cases are provided. 
    // Given the constraints and format, we read X directly.
    int X;
    if (!(cin >> X)) return 0;

    if (X > 35) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}