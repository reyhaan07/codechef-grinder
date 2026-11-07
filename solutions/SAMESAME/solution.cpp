#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given string A of length N and string B of length M (M <= N).
 * We need to find the minimum Hamming distance between B and any contiguous 
 * substring of A of length M.
 * 
 * Since N, M <= 100, a brute-force approach is perfectly efficient.
 * There are (N - M + 1) possible substrings of length M in A.
 * For each substring, we compare it with B character by character.
 * Total complexity per test case: O((N - M + 1) * M), which is at most O(N^2).
 * With N=100 and T=100, total operations are ~10^6, well within the 1s time limit.
 */

void solve() {
    int N, M;
    cin >> N >> M;
    string A, B;
    cin >> A >> B;

    int min_hamming = M; // Maximum possible Hamming distance is M

    // Iterate through all possible starting positions of substrings of length M
    for (int i = 0; i <= N - M; ++i) {
        int current_hamming = 0;
        // Compare substring A[i...i+M-1] with B[0...M-1]
        for (int j = 0; j < M; ++j) {
            if (A[i + j] != B[j]) {
                current_hamming++;
            }
        }
        // Update the minimum Hamming distance found so far
        if (current_hamming < min_hamming) {
            min_hamming = current_hamming;
        }
    }

    cout << min_hamming << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}