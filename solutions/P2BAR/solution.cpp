#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to count the number of '1's that appear after the first occurrence of a '0'.
 * 
 * Algorithm:
 * 1. Iterate through the string.
 * 2. Maintain a boolean flag `silence_found` initialized to false.
 * 3. If we encounter a '0', set `silence_found` to true.
 * 4. If we encounter a '1' and `silence_found` is true, increment the counter.
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(N) to store the string.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    bool silence_found = false;
    long long pulse_count = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            silence_found = true;
        } else if (S[i] == '1') {
            if (silence_found) {
                pulse_count++;
            }
        }
    }

    cout << pulse_count << "\n";
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