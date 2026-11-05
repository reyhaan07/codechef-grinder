#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N scores and a threshold K.
 * We need to sort the scores in descending order.
 * The K-th team (1-indexed) has a score S_k.
 * Any team with a score >= S_k qualifies.
 * 
 * Algorithm:
 * 1. Read N and K.
 * 2. Read all N scores into a vector.
 * 3. Sort the vector in descending order.
 * 4. Identify the score at index K-1 (0-indexed).
 * 5. Count how many elements in the sorted array are >= this score.
 * 
 * Complexity:
 * Sorting takes O(N log N).
 * Counting takes O(N).
 * Total time complexity: O(N log N) per test case.
 * Sum of N over test cases is 10^6, so O(N log N) is well within the 1s time limit.
 */

void solve() {
    int N, K;
    if (!(cin >> N >> K)) return;
    
    vector<long long> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    
    // Sort in descending order
    sort(S.begin(), S.end(), greater<long long>());
    
    // The score of the K-th team (1-indexed) is at index K-1
    long long threshold = S[K - 1];
    
    // Count how many teams have score >= threshold
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] >= threshold) {
            count++;
        } else {
            // Since the array is sorted descending, we can break early
            break;
        }
    }
    
    cout << count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}