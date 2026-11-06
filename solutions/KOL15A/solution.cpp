#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Processing a string
 * Approach: Iterate through each character of the string. If the character is a digit
 * (between '0' and '9'), convert it to its integer value and add it to the running sum.
 * Time Complexity: O(T * |S|), where T is the number of test cases and |S| is the length of the string.
 * Space Complexity: O(|S|) to store the string.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        string s;
        cin >> s;

        long long sum = 0;
        for (char c : s) {
            // Check if character is a digit
            if (c >= '0' && c <= '9') {
                // Convert char digit to int and add to sum
                sum += (c - '0');
            }
        }

        cout << sum << "\n";
    }

    return 0;
}