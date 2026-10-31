#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A rectangle has two pairs of equal sides. Given four side lengths a, b, c, and d,
 * they can form a rectangle if and only if they can be partitioned into two pairs
 * of equal values.
 * 
 * Mathematically, if we sort the four sides as s1 <= s2 <= s3 <= s4,
 * the condition is satisfied if s1 == s2 AND s3 == s4.
 * Alternatively, using XOR properties: a ^ b ^ c ^ d == 0 is a necessary 
 * condition for two pairs of equal numbers, but it is not sufficient (e.g., 1, 2, 3, 0 
 * would satisfy XOR but not the rectangle property).
 * 
 * The most robust way is to sort the array and check the equality of adjacent pairs.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        vector<int> sides(4);
        for (int i = 0; i < 4; ++i) {
            cin >> sides[i];
        }

        // Sort the sides to easily compare pairs
        sort(sides.begin(), sides.end());

        // Check if the two smallest are equal and the two largest are equal
        if (sides[0] == sides[1] && sides[2] == sides[3]) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}