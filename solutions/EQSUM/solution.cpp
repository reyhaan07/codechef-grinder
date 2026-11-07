#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The condition is A[i] - A[j] = i - j
 * Rearranging the terms:
 * A[i] - i = A[j] - j
 * 
 * Let B[k] = A[k] - k (using 1-based indexing for k).
 * We need to count pairs (i, j) with i < j such that B[i] = B[j].
 * 
 * If a value 'x' appears 'count' times in the array B, 
 * the number of pairs (i, j) with i < j such that B[i] = B[j] = x 
 * is given by the combination formula: count * (count - 1) / 2.
 * 
 * Constraints:
 * N <= 4 * 10^4, sum of N <= 2 * 10^5.
 * A[i] is between 1 and N.
 * B[i] = A[i] - i will range from (1 - N) to (N - 1).
 * We can use a map or an offset array to count frequencies.
 * Since the range of B[i] is roughly -40000 to 40000, 
 * an offset of 40000 is sufficient to use a frequency array.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    // B[i] = A[i] - (i + 1) because input is 0-indexed in vector
    // Range of B[i]: 1 - N to N - 1.
    // Offset by N to make indices non-negative: 1 to 2N.
    vector<long long> freq(2 * N + 1, 0);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        int val = A[i] - (i + 1);
        freq[val + N]++;
    }
    
    long long total_pairs = 0;
    for (int i = 0; i <= 2 * N; ++i) {
        if (freq[i] > 1) {
            total_pairs += (freq[i] * (freq[i] - 1)) / 2;
        }
    }
    
    cout << total_pairs << "\n";
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