#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Count frequency of each character
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // We want to check if there is any character that appears at least twice.
    // If a character appears at least twice, say at indices i and j (i < j),
    // we can delete all characters except these two (or keep them such that they form a palindrome).
    // Specifically, if any character appears >= 2 times, we can keep two instances of it 
    // and delete the rest (length = N - 2).
    // If no character appears >= 2 times, all characters are distinct, 
    // meaning no palindrome of length > 1 can be formed by deleting a subsequence.
    
    int max_freq = 0;
    for (auto& pair : freq) {
        max_freq = max(max_freq, pair.second);
    }

    if (max_freq >= 2) {
        // We can always keep at least one pair of identical characters 
        // and delete everything else. The maximum number of characters we can delete 
        // is N - 2.
        cout << n - 2 << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}