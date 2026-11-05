#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CANDYTYPE
 * Approach:
 * We need to find the most frequent element in an array.
 * In case of a tie in frequency, we choose the smallest value.
 * Since N is small (up to 100), we can use a frequency array (or map)
 * to count occurrences of each colour.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store frequencies.
 */

void solve() {
    int N;
    cin >> N;
    
    // Frequency array to store counts of each colour (1 to N)
    // Using N + 1 to accommodate 1-based indexing
    vector<int> freq(N + 1, 0);
    
    for (int i = 0; i < N; ++i) {
        int color;
        cin >> color;
        if (color >= 1 && color <= N) {
            freq[color]++;
        }
    }
    
    int max_freq = -1;
    int best_color = -1;
    
    // Iterate from 1 to N to find the most frequent colour.
    // By iterating in increasing order, if we find a frequency equal to 
    // the current max_freq, we do NOT update, thus preserving the 
    // "smaller colour" requirement in case of a tie.
    for (int i = 1; i <= N; ++i) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            best_color = i;
        }
    }
    
    cout << best_color << "\n";
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