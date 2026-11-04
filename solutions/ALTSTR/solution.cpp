#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a binary string S of length N. We want to rearrange S to maximize 
 * the length of the longest alternating substring.
 * 
 * Let c0 be the count of '0's and c1 be the count of '1's in the string.
 * Without loss of generality, assume c0 <= c1.
 * 
 * To form an alternating string, we can place the '0's and '1's in an alternating 
 * fashion. If we have c0 zeros, we can use at most c0 + 1 ones to form an 
 * alternating sequence of length 2 * c0 + 1 (e.g., 10101...01).
 * 
 * If c0 == c1, we can use all characters to form an alternating string of length 
 * c0 + c1 = N.
 * If c0 < c1, we can use all c0 zeros and c0 + 1 ones to form an alternating 
 * string of length 2 * c0 + 1.
 * 
 * Thus, the maximum length is 2 * min(c0, c1) + (c0 == c1 ? 0 : 1).
 * This can be simplified to: 2 * min(c0, c1) + 1, provided min(c0, c1) < max(c0, c1).
 * If c0 == c1, the formula 2 * c0 gives N.
 * 
 * Combining these:
 * If c0 == c1: result is 2 * c0 (which is N)
 * If c0 != c1: result is 2 * min(c0, c1) + 1
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int c0 = 0, c1 = 0;
    for (char c : S) {
        if (c == '0') c0++;
        else c1++;
    }

    if (c0 == c1) {
        cout << N << "\n";
    } else {
        int m = min(c0, c1);
        cout << 2 * m + 1 << "\n";
    }
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