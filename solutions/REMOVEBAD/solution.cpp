#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To make all elements in an array the same with the minimum number of operations,
 * we need to keep the element that appears the most frequently in the array.
 * 
 * If the most frequent element appears 'max_freq' times, then we need to remove
 * all other elements. The number of elements to remove is:
 * Total elements (N) - Frequency of the most frequent element (max_freq).
 * 
 * Complexity:
 * Time: O(N) per test case to count frequencies using a frequency array or hash map.
 * Space: O(N) to store the frequency array.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    // Using a frequency array since A_i <= N
    // We use a vector to handle the constraints efficiently.
    vector<int> freq(n + 1, 0);
    int max_freq = 0;
    
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        freq[val]++;
        if (freq[val] > max_freq) {
            max_freq = freq[val];
        }
    }
    
    // The minimum operations is N - max_freq
    cout << (n - max_freq) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}