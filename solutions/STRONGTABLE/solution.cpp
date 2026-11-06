#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Suppose we choose a subset of k legs with strengths W_1, W_2, ..., W_k.
 * Let the minimum strength in this subset be W_min.
 * The weight W that can be placed on this table must satisfy:
 * W / k <= W_min  => W <= k * W_min.
 * To maximize W for a fixed subset, we should pick legs such that their 
 * minimum strength is as large as possible.
 * 
 * Strategy:
 * 1. Sort the given leg strengths in non-decreasing order: W_1 <= W_2 <= ... <= W_N.
 * 2. If we decide that the minimum strength of our subset is W_i, then to maximize 
 *    the total weight, we should include all legs with strength >= W_i.
 * 3. Let there be 'count' legs with strength >= W_i. Since the array is sorted, 
 *    these are exactly the legs from index i to N-1 (0-indexed).
 *    The number of such legs is (N - i).
 * 4. The maximum weight for this specific minimum strength W_i is (N - i) * W_i.
 * 5. We iterate through all possible i and find the maximum of (N - i) * W_i.
 * 
 * Time Complexity: O(N log N) due to sorting.
 * Space Complexity: O(N) to store the weights.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<long long> w(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    
    // Sort the weights to easily count how many legs have strength >= W_i
    sort(w.begin(), w.end());
    
    long long max_weight = 0;
    
    // For each leg w[i], consider it as the minimum strength leg in a subset.
    // The subset will consist of all legs from index i to n-1.
    // The number of legs is (n - i).
    for (int i = 0; i < n; ++i) {
        long long current_weight = w[i] * (n - i);
        if (current_weight > max_weight) {
            max_weight = current_weight;
        }
    }
    
    cout << max_weight << "\n";
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