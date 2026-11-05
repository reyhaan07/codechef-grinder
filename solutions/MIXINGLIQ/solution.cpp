#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has A units of syrup and B units of water.
 * The ratio must be 1:2 (Syrup : Water).
 * Let x be the amount of syrup used. Then 2x must be the amount of water used.
 * Constraints:
 * 1. x <= A
 * 2. 2x <= B
 * 
 * From these, x <= A and x <= B/2.
 * Since x must be an integer, x = min(A, B / 2).
 * The total quantity of orange juice is x + 2x = 3x.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long A, B;
        cin >> A >> B;

        // Calculate the maximum amount of syrup (x) that can be used
        // such that 2x <= B and x <= A.
        // Since x must be an integer, x = min(A, B / 2).
        long long x = min(A, B / 2);

        // Total quantity is x (syrup) + 2x (water) = 3x
        long long total_juice = 3 * x;

        cout << total_juice << "\n";
    }

    return 0;
}