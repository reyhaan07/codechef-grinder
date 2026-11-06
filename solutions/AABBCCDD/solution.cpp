#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * 1. Operation 1 allows us to convert any uppercase letter to its lowercase equivalent.
 *    This means every uppercase letter 'X' can effectively become a lowercase 'x'.
 * 2. After applying Operation 1 as much as we want, every character S[i] 
 *    can be treated as its lowercase version.
 * 3. Operation 2 allows us to pick one lowercase letter and change all its 
 *    occurrences to another lowercase letter.
 * 4. Effectively, we can choose any two lowercase letters 'x' and 'y' and merge 
 *    their counts. Or, we can choose to merge one letter into another that 
 *    already exists.
 * 5. Since we want to maximize the count of a single letter, we should count 
 *    the frequency of every lowercase letter (including those converted from 
 *    uppercase) and then add the frequency of any one letter to another.
 * 6. To maximize the result, we should pick the two most frequent letters 
 *    and merge them.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    // Frequency map for lowercase letters 'a' through 'z'
    vector<int> freq(26, 0);

    for (char c : S) {
        if (c >= 'A' && c <= 'Z') {
            freq[c - 'A']++;
        } else {
            freq[c - 'a']++;
        }
    }

    // Sort frequencies to find the two largest
    sort(freq.begin(), freq.end(), greater<int>());

    // We can merge the second most frequent letter into the most frequent one.
    // The new count for the most frequent letter will be freq[0] + freq[1].
    // If there is only one type of letter, freq[1] will be 0, which is correct.
    cout << freq[0] + freq[1] << "\n";
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