#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The menu prices are powers of 2: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048.
 * This is equivalent to representing a number in binary, but with a constraint:
 * we can use the largest menu (2048) as many times as we want.
 * 
 * To minimize the number of items:
 * 1. Use as many 2048s as possible to reduce p.
 * 2. For the remainder, use the greedy approach: represent the remaining value 
 *    as a sum of powers of 2 (which is exactly what the binary representation does).
 * 3. The number of items will be (p / 2048) + (number of set bits in p % 2048).
 */

void solve() {
    int p;
    cin >> p;
    
    int count = 0;
    
    // Use as many 2048s as possible
    count += p / 2048;
    p %= 2048;
    
    // Use the binary representation for the remainder
    // __builtin_popcount counts the number of set bits (1s) in an integer
    count += __builtin_popcount(p);
    
    cout << count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}