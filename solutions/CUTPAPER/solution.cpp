#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a square paper of size N x N.
 * We want to cut out squares of size K x K.
 * Along one side of length N, we can fit floor(N / K) squares of length K.
 * Since the paper is a square, we can fit floor(N / K) squares along the other side as well.
 * The total number of K x K squares is (N / K) * (N / K).
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= K <= N <= 1000
 * Since N <= 1000, N*N is at most 1,000,000, which fits in a standard 32-bit integer.
 * However, using long long is safe practice.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        // Calculate how many squares fit along one dimension
        long long side_count = n / k;
        
        // Total squares is side_count squared
        long long total_squares = side_count * side_count;
        
        cout << total_squares << "\n";
    }

    return 0;
}