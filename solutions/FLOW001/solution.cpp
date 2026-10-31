#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Add Two Numbers (FLOW001)
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1), as we only use a few variables for input and output.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        if (cin >> a >> b) {
            // Calculate the sum and output the result
            // Using long long to prevent potential overflow, 
            // though int suffices for the given constraints (0 <= A, B <= 10000).
            cout << (a + b) << "\n";
        }
    }

    return 0;
}