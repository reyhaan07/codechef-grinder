#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to represent N as 3*x + 4*y = N, where x, y >= 0.
 * This is a variation of the Frobenius Coin Problem (or Change-Making Problem).
 * For two numbers a and b, any integer N > (a*b - a - b) can be represented 
 * as a linear combination of a and b with non-negative coefficients.
 * Here, a=3 and b=4. (3*4 - 3 - 4) = 5.
 * So, any N > 5 can be represented.
 * Let's check small values:
 * N=1: NO
 * N=2: NO
 * N=3: YES (3*1)
 * N=4: YES (4*1)
 * N=5: NO
 * N=6: YES (3*2)
 * N=7: YES (3*1 + 4*1)
 * N=8: YES (4*2)
 * 
 * Thus, N is representable if N != 1, 2, 5.
 */

void solve() {
    int n;
    cin >> n;
    if (n == 1 || n == 2 || n == 5) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
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