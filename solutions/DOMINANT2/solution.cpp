#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * An element is dominant if its frequency is strictly greater than the frequency 
 * of any other element in the array.
 * 
 * Strategy:
 * 1. Count the frequency of each element in the array.
 * 2. Store these frequencies in a collection (like a vector).
 * 3. Sort the frequencies in descending order.
 * 4. If the highest frequency is strictly greater than the second highest frequency,
 *    then a dominant element exists.
 * 5. Special case: If there is only one unique element, it is dominant.
 * 
 * Complexity:
 * Time: O(N log N) per test case due to sorting frequencies.
 * Space: O(N) to store frequencies.
 */

void solve() {
    int N;
    cin >> N;
    
    // Using a map or a frequency array since 1 <= A_i <= N
    vector<int> freq(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        freq[val]++;
    }
    
    // Collect all non-zero frequencies
    vector<int> counts;
    for (int i = 1; i <= N; ++i) {
        if (freq[i] > 0) {
            counts.push_back(freq[i]);
        }
    }
    
    // If there's only one unique element, it is dominant
    if (counts.size() == 1) {
        cout << "YES" << "\n";
        return;
    }
    
    // Sort frequencies in descending order
    sort(counts.rbegin(), counts.rend());
    
    // Check if the largest frequency is strictly greater than the second largest
    if (counts[0] > counts[1]) {
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