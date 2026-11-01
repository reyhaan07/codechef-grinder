#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The operation allowed is swapping any two characters in string S.
 * Swapping characters allows us to rearrange the string S into any permutation
 * of its original characters.
 * 
 * Therefore, string S can be transformed into string R if and only if
 * S and R have the same number of '0's and the same number of '1's.
 * Since the strings are binary and have the same length N, checking if the
 * count of '1's in S is equal to the count of '1's in R is sufficient.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the strings.
 */

void solve() {
    int N;
    cin >> N;
    string S, R;
    cin >> S >> R;

    int countS1 = 0;
    int countR1 = 0;

    for (char c : S) {
        if (c == '1') countS1++;
    }

    for (char c : R) {
        if (c == '1') countR1++;
    }

    if (countS1 == countR1) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}