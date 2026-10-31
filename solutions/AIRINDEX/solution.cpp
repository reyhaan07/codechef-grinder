#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The condition for the government to be successful is that the AQI (X) 
 * must be strictly less than 100.
 * 
 * Constraints:
 * 1 <= X <= 150
 * 
 * Logic:
 * If X < 100, output "YES".
 * Otherwise (if X >= 100), output "NO".
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X, but standard competitive 
    // programming practice often involves reading until EOF or a specific count.
    // Based on the problem description, we read X.
    int X;
    if (cin >> X) {
        if (X < 100) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}