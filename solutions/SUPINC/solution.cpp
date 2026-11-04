#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A superincreasing array A satisfies A[i] > sum(A[1...i-1]).
 * To check if a valid superincreasing array exists with A[K] = X:
 * 
 * 1. To make it easiest to satisfy the condition for A[K] = X, we should make
 *    the elements before A[K] as small as possible.
 *    The smallest positive integer is 1.
 *    To minimize the sum before A[K], we pick:
 *    A[1] = 1
 *    A[2] = 2 (since 2 > 1)
 *    A[3] = 4 (since 4 > 1+2=3)
 *    A[i] = 2^(i-1)
 *    
 *    The sum of the first K-1 elements in this minimal sequence is:
 *    Sum = 1 + 2 + 4 + ... + 2^(K-2) = 2^(K-1) - 1.
 *    
 *    For A[K] = X to be valid, we must have X > Sum, i.e., X > 2^(K-1) - 1.
 *    Since X and 2^(K-1) are integers, this is equivalent to X >= 2^(K-1).
 * 
 * 2. If K is large, 2^(K-1) can exceed 10^9 (the maximum value of X).
 *    If K-1 >= 30, 2^(K-1) > 10^9, which is definitely greater than any X.
 *    So if K > 30, it is impossible for X to be valid (since X <= 10^9).
 * 
 * 3. Therefore, the condition is:
 *    If K > 30, output "No".
 *    Else, check if X >= (1LL << (K - 1)).
 */

void solve() {
    long long N, K, X;
    cin >> N >> K >> X;

    // If K is large, 2^(K-1) will exceed the maximum possible X (10^9).
    // 2^29 = 536,870,912
    // 2^30 = 1,073,741,824
    // If K-1 >= 30, then 2^(K-1) > 10^9.
    if (K - 1 >= 30) {
        cout << "No" << "\n";
        return;
    }

    long long min_val_at_k = (1LL << (K - 1));

    if (X >= min_val_at_k) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
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