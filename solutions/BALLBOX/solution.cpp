#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to distribute N balls into K boxes such that:
 * 1. Each box has >= 1 ball.
 * 2. No two boxes have the same number of balls.
 * 
 * To minimize the number of balls required for K boxes, we should pick the 
 * smallest possible distinct positive integers: 1, 2, 3, ..., K.
 * The sum of these integers is the minimum number of balls required:
 * Sum = 1 + 2 + 3 + ... + K = K * (K + 1) / 2.
 * 
 * If N < K * (K + 1) / 2, it is impossible to satisfy the conditions.
 * If N >= K * (K + 1) / 2, we can always satisfy the conditions.
 * We can start with the distribution [1, 2, 3, ..., K-1, X], where X is the 
 * remaining balls. Since X = N - (sum of 1 to K-1), and the sum of 1 to K-1 
 * is (K-1)*K/2, X will be at least K because N >= K*(K+1)/2.
 * Thus, the largest box will have at least K balls, ensuring all boxes are distinct.
 * 
 * Constraints:
 * N <= 10^9, K <= 10^4.
 * K * (K + 1) / 2 can be up to ~5 * 10^7, which fits in a standard 32-bit int,
 * but using long long is safer to prevent overflow during calculation.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        // The minimum number of balls required for K distinct boxes is 1+2+...+K
        // Formula: K * (K + 1) / 2
        long long min_balls = k * (k + 1) / 2;

        if (n >= min_balls) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}