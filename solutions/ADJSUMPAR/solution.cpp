#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given B_i = (A_i + A_{i+1}) % 2 for 1 <= i < N
 * and B_N = (A_N + A_1) % 2.
 * 
 * Let's consider the sum of all elements in B:
 * Sum(B) = (A_1 + A_2) + (A_2 + A_3) + ... + (A_{N-1} + A_N) + (A_N + A_1) (mod 2)
 * Sum(B) = 2 * (A_1 + A_2 + ... + A_N) (mod 2)
 * 
 * Since 2 * (anything) is always 0 modulo 2, the sum of all elements in B 
 * must be even for a valid array A to exist.
 * 
 * If the sum of elements in B is even, it means there is an even number of 1s in B.
 * This condition is both necessary and sufficient.
 */

void solve() {
    int N;
    cin >> N;
    
    int sum_B = 0;
    for (int i = 0; i < N; ++i) {
        int b;
        cin >> b;
        sum_B += b;
    }
    
    // If the sum of B is even, then a valid A exists.
    if (sum_B % 2 == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}