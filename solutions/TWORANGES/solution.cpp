#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two ranges [A, B] and [C, D]. We need to find the number of 
 * integers that belong to at least one of these ranges.
 * 
 * Since the constraints are very small (1 <= A, B, C, D <= 8), we can use a 
 * boolean array or a set to track which integers are present in either range.
 * 
 * Approach:
 * 1. Create a boolean array `present` of size 9 (since max value is 8).
 * 2. Iterate from A to B and mark `present[i] = true`.
 * 3. Iterate from C to D and mark `present[i] = true`.
 * 4. Count the number of `true` values in the array.
 * 
 * Time Complexity: O(T * (B-A + D-C)), which is effectively O(T) given the small constraints.
 * Space Complexity: O(1) as the array size is constant.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Boolean array to track integers from 1 to 8
        bool present[9] = {false};

        // Mark integers in the first range [A, B]
        for (int i = a; i <= b; ++i) {
            present[i] = true;
        }

        // Mark integers in the second range [C, D]
        for (int i = c; i <= d; ++i) {
            present[i] = true;
        }

        // Count how many integers were marked
        int count = 0;
        for (int i = 1; i <= 8; ++i) {
            if (present[i]) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}