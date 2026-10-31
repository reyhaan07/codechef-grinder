#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A number is a multiple of 5 if and only if its last digit is 0 or 5.
 * Therefore, to determine if we can rearrange the digits of N to form a multiple of 5,
 * we simply need to check if the string representation of N contains at least one '0' or at least one '5'.
 * 
 * Time Complexity: O(D) per test case, where D is the number of digits.
 * Space Complexity: O(D) to store the string of digits.
 */

void solve() {
    int D;
    cin >> D;
    string N;
    cin >> N;

    bool found = false;
    for (char c : N) {
        if (c == '0' || c == '5') {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
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