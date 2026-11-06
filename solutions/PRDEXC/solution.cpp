#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given X, Y, and P. We want to find the minimum moves (increment X or Y)
 * such that (X + dx) * (Y + dy) >= P, where dx + dy is minimized.
 * 
 * Constraints are small (X, Y <= 50, P <= 10000).
 * Since we want to minimize the total moves (k = dx + dy), we can iterate
 * on the total number of moves k starting from 0.
 * For a fixed k, we want to maximize the product (X + dx) * (Y + dy)
 * where dx + dy = k and dx, dy >= 0.
 * 
 * To maximize the product of two numbers with a fixed sum, we should make them
 * as close to each other as possible.
 * For a fixed k, the possible pairs (dx, dy) are (0, k), (1, k-1), ..., (k, 0).
 * We check if any of these satisfy (X + dx) * (Y + dy) >= P.
 */

void solve() {
    long long X, Y, P;
    cin >> X >> Y >> P;

    if (X * Y >= P) {
        cout << 0 << "\n";
        return;
    }

    // Since X, Y <= 50 and P <= 10000, the maximum moves needed won't be very large.
    // Even if X=1, Y=1, P=10000, we need X*Y >= 10000.
    // X+k, Y+k => (50+k)^2 >= 10000 => 50+k >= 100 => k=50.
    // A loop up to 200 is more than sufficient.
    for (int k = 1; k <= 200; ++k) {
        for (int dx = 0; dx <= k; ++dx) {
            int dy = k - dx;
            if ((X + dx) * (Y + dy) >= P) {
                cout << k << "\n";
                return;
            }
        }
    }
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