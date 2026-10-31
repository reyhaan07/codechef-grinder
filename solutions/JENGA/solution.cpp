#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * There are N people and X tiles.
 * In each round, every person takes 1 tile.
 * This means in one round, N tiles are consumed.
 * For the game to be valid:
 * 1. All players must have a tile in each round (X must be at least N).
 * 2. All tiles must be used at the end (X must be perfectly divisible by N).
 * 
 * Mathematically, this is equivalent to:
 * X >= N AND X % N == 0.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        // Check if X is divisible by N and X is at least N
        if (x >= n && x % n == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}