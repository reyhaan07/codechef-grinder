#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given an array of N song lengths and the index K (1-indexed) of "Uncle Johny".
 * We need to find the new index of "Uncle Johny" after the array is sorted in non-decreasing order.
 * 
 * Approach:
 * 1. Store the length of "Uncle Johny" by accessing A[K-1].
 * 2. Sort the array of lengths.
 * 3. Find the position of the stored length in the sorted array.
 * 4. Since the problem guarantees unique lengths, the position is unique.
 * 
 * Complexity:
 * Time: O(T * N log N) where N <= 100. This is well within the 2.5s limit.
 * Space: O(N) to store the array.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int k;
    cin >> k;
    
    // Store the length of "Uncle Johny"
    long long uncleJohnyLength = a[k - 1];
    
    // Sort the playlist
    sort(a.begin(), a.end());
    
    // Find the new position (1-indexed)
    for (int i = 0; i < n; ++i) {
        if (a[i] == uncleJohnyLength) {
            cout << (i + 1) << "\n";
            return;
        }
    }
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