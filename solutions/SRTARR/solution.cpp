#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to sort a binary string (all 0s followed by all 1s) using the minimum number of reversals.
 * A sorted string looks like 00...0011...11.
 * 
 * Consider the transitions in the string. A transition from '1' to '0' (i.e., "10")
 * is what prevents the string from being sorted.
 * If we have a block of "10", we can reverse it to "01".
 * 
 * Let's look at the occurrences of "10" as a substring.
 * Every time we have a "10" pattern, it represents a point where the sorted order is violated.
 * Specifically, if we count the number of contiguous blocks of '1's followed by '0's,
 * we can observe the pattern:
 * - "000": 0 operations.
 * - "1001": One "10" block. 1 operation: reverse "100" -> "001".
 * - "1010": Two "10" blocks. 2 operations.
 * - "010101": Three "10" blocks. 2 operations.
 * 
 * The number of operations required is exactly the number of occurrences of the pattern "10" 
 * in the string. Why? Because each "10" pair is a boundary that needs to be resolved.
 * By reversing a substring starting at a '1' and ending at a '0', we can effectively 
 * move a '0' to the left or a '1' to the right, reducing the number of "10" boundaries.
 * 
 * Complexity:
 * Time: O(N) per test case, O(Sum of N) total.
 * Space: O(N) to store the string.
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == '1' && s[i + 1] == '0') {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}