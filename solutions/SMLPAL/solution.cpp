#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given X ones and Y twos, both X and Y are even.
 * We need to form the smallest palindrome using all these digits.
 * 
 * A palindrome reads the same forwards and backwards.
 * To make a number as small as possible, we want the smallest digits 
 * at the most significant positions (the beginning).
 * 
 * Since we have X ones and Y twos, and we must use all of them:
 * 1. We should place as many 1s as possible at the start.
 * 2. Since it must be a palindrome, if we place 'k' ones at the start, 
 *    we must place 'k' ones at the end.
 * 3. To minimize the number, we fill the outer layers with 1s, then 2s, 
 *    then 2s, then 1s, etc.
 * 
 * Given X and Y are even:
 * We can place all X/2 ones at the beginning, then all Y/2 twos, 
 * then all Y/2 twos, then all X/2 ones.
 * This results in the sequence: (X/2 ones) (Y/2 twos) (Y/2 twos) (X/2 ones).
 * Example: X=2, Y=2 -> 1, 2, 2, 1 -> 1221.
 * Example: X=4, Y=0 -> 11, 11 -> 1111.
 */

void solve() {
    int X, Y;
    cin >> X >> Y;

    // Print X/2 ones
    for (int i = 0; i < X / 2; ++i) {
        cout << 1;
    }
    // Print Y/2 twos
    for (int i = 0; i < Y / 2; ++i) {
        cout << 2;
    }
    // Print Y/2 twos
    for (int i = 0; i < Y / 2; ++i) {
        cout << 2;
    }
    // Print X/2 ones
    for (int i = 0; i < X / 2; ++i) {
        cout << 1;
    }
    cout << "\n";
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