#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks us to compare two integers X (threshold) and Y (current speed).
 * Chef is prone to errors if Y > X.
 * 
 * Constraints:
 * 1 <= X, Y <= 100
 * Time Complexity: O(1) per test case
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description does not explicitly state multiple test cases,
    // but the instructions suggest handling them. Given the input format 
    // "The only line of input contains two space separated integers", 
    // we read X and Y directly.
    
    int X, Y;
    if (cin >> X >> Y) {
        if (Y > X) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}