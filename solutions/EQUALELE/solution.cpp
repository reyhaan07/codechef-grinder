#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To make all elements of an array equal in the minimum number of operations,
 * we should identify the element that appears most frequently in the array.
 * Let the frequency of the most frequent element be 'max_freq'.
 * We keep these 'max_freq' elements as they are and change all other (N - max_freq)
 * elements to match this value.
 * 
 * Therefore, the minimum number of operations required is N - max_freq.
 * 
 * Time Complexity: O(N) per test case to count frequencies.
 * Space Complexity: O(N) to store frequencies of elements.
 */

void solve() {
    int N;
    if (!(cin >> N)) return;
    
    // Using a map or a frequency array. Since A_i <= N, 
    // a frequency array is efficient.
    vector<int> freq(N + 1, 0);
    int max_freq = 0;
    
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        freq[val]++;
        if (freq[val] > max_freq) {
            max_freq = freq[val];
        }
    }
    
    // The minimum operations is the total count minus the count of the 
    // most frequent element.
    cout << (N - max_freq) << "\n";
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