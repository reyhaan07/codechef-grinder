#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a stick of length N and want to obtain a stick of length X.
 * We can break a stick into parts if all parts have the same parity.
 * 
 * Case 1: X is odd.
 * If X is odd, we can always obtain X if N is odd. If N is even, we can break N into 
 * (N-X) and X. Since N is even and X is odd, (N-X) is odd. This doesn't work directly.
 * However, if N is even and X is odd, we can break N into parts of odd length if 
 * we can make all parts odd. Actually, if X is odd, we can obtain X if (N-X) is even.
 * If N is even and X is odd, (N-X) is odd, which is not allowed.
 * Wait, let's re-evaluate:
 * If X is odd, we can obtain X if N is odd. If N is even, we can break N into 
 * parts of length 1. If we have an even N, we can break it into (N-X) and X.
 * If X is odd, and N is even, (N-X) is odd. This is allowed!
 * So if X is odd, we can always obtain X regardless of N's parity.
 * 
 * Case 2: X is even.
 * If X is even, we can only obtain X if N is even. If N is odd, we can only break 
 * it into odd parts. Thus, we can never obtain an even length from an odd N.
 * If N is even and X is even, we can always obtain X (e.g., break into X and N-X, 
 * both are even).
 * 
 * Summary:
 * If X is odd: Always YES.
 * If X is even: YES if N is even, NO if N is odd.
 */

void solve() {
    long long N, X;
    cin >> N >> X;

    if (X % 2 != 0) {
        // If X is odd, we can always reach it.
        cout << "YES" << "\n";
    } else {
        // If X is even, we can only reach it if N is even.
        if (N % 2 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
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