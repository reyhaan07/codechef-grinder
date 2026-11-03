#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Giant Wheel
 * The problem asks to check if a given height X is at least 60.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X per run,
    // but standard competitive programming practice often involves 
    // handling test cases. Based on the provided constraints, 
    // we read X and output the result.
    
    long long X;
    if (!(cin >> X)) return 0;

    // Check if Alice's height is at least 60
    if (X >= 60) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}