#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice and Bob take turns picking characters from string S.
 * Since they take turns, Alice will pick N/2 characters and Bob will pick N/2 characters.
 * For their strings A and B to be identical, they must have the same length,
 * which implies N must be even.
 * 
 * Furthermore, for A and B to be identical, every character that appears in the string
 * must appear an even number of times in total. If any character appears an odd number
 * of times, it is impossible to distribute them equally between Alice and Bob.
 * 
 * If every character appears an even number of times, we can always construct the strings
 * such that A == B. For example, if we have two 'a's, Alice takes one and Bob takes one.
 * Since we can pick any character from S at any time, we can ensure that whenever
 * Alice picks a character 'x', Bob can pick the same character 'x' in his next turn
 * (provided there is at least one 'x' remaining).
 * 
 * Thus, the condition is simply:
 * 1. N must be even.
 * 2. Every character in the string must have an even frequency.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    // If N is odd, they cannot have strings of equal length.
    if (N % 2 != 0) {
        cout << "NO" << "\n";
        return;
    }

    // Count frequencies of each character.
    unordered_map<char, int> freq;
    for (char c : S) {
        freq[c]++;
    }

    // Check if every character appears an even number of times.
    bool possible = true;
    for (auto const& [key, val] : freq) {
        if (val % 2 != 0) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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