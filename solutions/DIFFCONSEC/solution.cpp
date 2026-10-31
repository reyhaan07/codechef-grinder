#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a binary string S of length N. We want to ensure no two 
 * consecutive characters are the same by inserting characters.
 * 
 * If we have two identical adjacent characters (e.g., "00" or "11"), 
 * we must insert a character between them to break the sequence.
 * For example, "00" becomes "010" or "00" -> "010".
 * 
 * If we iterate through the string and find S[i] == S[i+1], we must 
 * perform one insertion to separate them. Since we can insert any character,
 * one insertion is always sufficient to fix a pair of identical adjacent 
 * characters.
 * 
 * The total number of operations is simply the count of indices i 
 * such that S[i] == S[i+1].
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int operations = 0;
    // Iterate through the string and check adjacent pairs
    for (int i = 0; i < N - 1; ++i) {
        if (S[i] == S[i + 1]) {
            operations++;
        }
    }
    cout << operations << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}