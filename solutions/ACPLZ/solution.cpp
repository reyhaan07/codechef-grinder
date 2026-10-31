#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks us to determine if the room temperature T is strictly greater than 30.
 * If T > 30, output "YES".
 * Otherwise, output "NO".
 * 
 * Constraints:
 * 1 <= T <= 50
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    // The problem description implies a single input T per run based on the 
    // "The only line of input will contain a single integer T" description.
    // However, standard competitive programming practice often involves multiple 
    // test cases. Given the constraints and the prompt instructions, we read T.
    if (cin >> T) {
        if (T > 30) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}