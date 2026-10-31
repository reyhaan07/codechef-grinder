#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The IOI 2024 is held from September 1st to September 8th.
 * Given an integer X representing a date in September, we need to check
 * if 1 <= X <= 8.
 * 
 * Constraints: 1 <= X <= 30.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single input X, but standard competitive 
    // programming practice often involves test cases. If the problem implies 
    // only one input, this structure still works correctly.
    if (!(cin >> t)) return 0;

    // Based on the problem description, it asks for a date X.
    // If the input format implies multiple test cases, we loop.
    // If it's just one integer, we treat t as X.
    // Given the structure, let's assume the first input is X.
    int X = t;
    
    if (X >= 1 && X <= 8) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}