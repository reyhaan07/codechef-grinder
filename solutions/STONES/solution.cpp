#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two strings: J (jewels) and S (stones).
 * We need to count how many characters in S are present in J.
 * 
 * Constraints:
 * T test cases.
 * Length of J and S <= 100.
 * Characters are English lower and upper case (ASCII 52 possible characters).
 * 
 * Approach:
 * 1. Use a boolean array or a hash set to store the characters present in J for O(1) lookup.
 * 2. Iterate through string S and check if each character exists in the set.
 * 3. Time Complexity: O(|J| + |S|) per test case.
 * 4. Space Complexity: O(1) since the character set size is fixed (52-128).
 */

void solve() {
    string J, S;
    cin >> J >> S;

    // Boolean array to mark characters present in J.
    // ASCII range for 'A'-'z' is 65 to 122. Size 128 is sufficient.
    bool is_jewel[128] = {false};

    for (char c : J) {
        is_jewel[(int)c] = true;
    }

    long long count = 0;
    for (char c : S) {
        if (is_jewel[(int)c]) {
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
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}