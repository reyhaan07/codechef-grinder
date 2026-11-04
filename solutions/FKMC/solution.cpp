#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice wants to maximize the number of '1's in the string.
 * She can choose one contiguous block of '0's and turn them into '1's.
 * 
 * Strategy:
 * 1. Count the total number of '1's already present in the string.
 * 2. Identify all contiguous blocks of '0's.
 * 3. Find the length of the longest contiguous block of '0's.
 * 4. The maximum number of '1's after the operation will be:
 *    (Total '1's) + (Length of the longest block of '0's).
 * 
 * Complexity:
 * Time: O(N) per test case, where N is the length of the string.
 * Space: O(N) to store the string.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int total_ones = 0;
    for (char c : S) {
        if (c == '1') {
            total_ones++;
        }
    }

    int max_zeros = 0;
    int current_zeros = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            current_zeros++;
        } else {
            if (current_zeros > max_zeros) {
                max_zeros = current_zeros;
            }
            current_zeros = 0;
        }
    }
    // Final check for a block ending at the last index
    if (current_zeros > max_zeros) {
        max_zeros = current_zeros;
    }

    cout << total_ones + max_zeros << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}