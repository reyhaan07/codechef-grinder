#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: The Great Run
 * Approach: Sliding Window / Prefix Sum
 * Since N is small (up to 100), a simple sliding window or even a nested loop 
 * approach is O(N*K) or O(N), both of which are well within the time limits.
 * We need to find the maximum sum of a contiguous subarray of length K.
 */

void solve() {
    int N, K;
    if (!(cin >> N >> K)) return;
    
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    
    // Calculate the sum of the first window of size K
    long long current_sum = 0;
    for (int i = 0; i < K; ++i) {
        current_sum += a[i];
    }
    
    long long max_girls = current_sum;
    
    // Slide the window across the array
    for (int i = K; i < N; ++i) {
        current_sum = current_sum - a[i - K] + a[i];
        if (current_sum > max_girls) {
            max_girls = current_sum;
        }
    }
    
    cout << max_girls << "\n";
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