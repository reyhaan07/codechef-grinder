#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks us to map pairs of binary digits to specific characters:
 * 00 -> A
 * 01 -> T
 * 10 -> C
 * 11 -> G
 * 
 * Since N is even and we process the string from left to right in pairs,
 * we can iterate through the string with a step of 2.
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Total time complexity: O(Sum of N), which is at most 10^3.
 * Space Complexity: O(1) auxiliary space (excluding the input/output storage).
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < n; i += 2) {
        string pair = s.substr(i, 2);
        if (pair == "00") {
            result += 'A';
        } else if (pair == "01") {
            result += 'T';
        } else if (pair == "10") {
            result += 'C';
        } else if (pair == "11") {
            result += 'G';
        }
    }
    cout << result << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}