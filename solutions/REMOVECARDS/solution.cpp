#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N cards with values A_i. We want all remaining cards to have the same value.
 * To minimize the number of moves (removals), we should keep the cards that appear 
 * most frequently in the initial set.
 * 
 * If a number 'x' appears 'count' times in the array, we can keep all 'count' cards
 * and remove the remaining (N - count) cards.
 * To minimize (N - count), we must maximize 'count'.
 * 
 * Algorithm:
 * 1. Count the frequency of each number present in the input.
 * 2. Find the maximum frequency among all numbers.
 * 3. The answer is N - max_frequency.
 * 
 * Complexity:
 * Time: O(N) per test case.
 * Space: O(K) where K is the range of A_i (K=10 here).
 */

void solve() {
    int n;
    cin >> n;
    
    // Since 1 <= A_i <= 10, we can use a frequency array of size 11.
    vector<int> freq(11, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        freq[a]++;
    }
    
    int max_freq = 0;
    for (int i = 1; i <= 10; ++i) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }
    
    cout << (n - max_freq) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}