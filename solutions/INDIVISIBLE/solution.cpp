#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given A, B, C (2 <= A, B, C <= 100).
 * We need to find a positive integer K < 100 such that:
 * A % K != 0 AND B % K != 0 AND C % K != 0.
 * 
 * Since A, B, C are at most 100, any prime number greater than 100 would work,
 * but the constraint is K < 100.
 * Let's check values of K starting from 99 downwards.
 * Since A, B, C <= 100, if we pick a K such that K > max(A, B, C), 
 * then K cannot divide A, B, or C (because a number cannot be divided by 
 * something larger than itself unless the number is 0, but A, B, C >= 2).
 * 
 * Actually, even simpler: if we pick K such that K > 50, then the only multiples
 * of K are K itself (since 2K > 100). So if K is not equal to A, B, or C,
 * it will not divide them.
 * 
 * A safe strategy: Iterate K from 99 down to 2. If K != A, K != B, and K != C,
 * then K is a valid answer.
 */

void solve() {
    int A, B, C;
    cin >> A >> B >> C;
    
    for (int k = 99; k >= 2; --k) {
        if (A % k != 0 && B % k != 0 && C % k != 0) {
            cout << k << "\n";
            return;
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