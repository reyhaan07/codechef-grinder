#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Counting Words (CNTWRD)
 * The problem asks for the total number of words in a book with N pages,
 * where each page contains M words.
 * Total words = N * M.
 * Constraints: N, M <= 100. The product will be at most 10,000,
 * which fits comfortably within a standard 32-bit integer.
 * Using long long is safe practice for competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        if (cin >> n >> m) {
            // Calculate total words
            long long total_words = n * m;
            // Output the result
            cout << total_words << "\n";
        }
    }

    return 0;
}