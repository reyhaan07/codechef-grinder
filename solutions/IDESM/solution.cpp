#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: The Ides of March
 * The ides of March is defined as the 15th of March.
 * We need to check if the input N is equal to 15.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // The problem description implies a single integer input per run,
    // but standard competitive programming practice often involves 
    // reading until EOF or a specified number of test cases.
    // Given the constraints and format, we read N.
    if (cin >> n) {
        if (n == 15) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}