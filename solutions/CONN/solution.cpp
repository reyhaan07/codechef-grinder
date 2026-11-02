#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to determine if N = 2*X + 7*Y for non-negative integers X, Y.
 * This is a variation of the Frobenius Coin Problem.
 * Since we can use any number of 2s, we can represent any even number.
 * If N is even, we can always represent it as 2*X (with Y=0).
 * If N is odd, we need at least one 7.
 * If N = 7 + (N - 7), then N - 7 must be even and non-negative.
 * So, if N is odd, we check if (N - 7) >= 0 and (N - 7) is even.
 * 
 * General approach:
 * Iterate through possible values of Y (number of 7s).
 * Since 2*X = N - 7*Y, we need N - 7*Y >= 0 and (N - 7*Y) % 2 == 0.
 * We only need to check Y such that 7*Y <= N.
 * Actually, we only need to check Y values such that 7*Y has the same parity as N.
 * If N is even, Y=0 works. If N is odd, Y=1 works if N >= 7.
 * If N < 7 and N is odd, it's impossible.
 */

void solve() {
    long long N;
    cin >> N;

    // We can iterate through possible counts of 7s.
    // Since 2*X = N - 7*Y, we need N - 7*Y to be non-negative and even.
    // We only need to check a few values of Y because if we have 
    // two 7s (14), that can be replaced by seven 2s (14).
    // So we only need to check Y = 0, 1, 2.
    
    bool possible = false;
    for (int y = 0; y <= 2; ++y) {
        long long remainder = N - 7LL * y;
        if (remainder >= 0 && remainder % 2 == 0) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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