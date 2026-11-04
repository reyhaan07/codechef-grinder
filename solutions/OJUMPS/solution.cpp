#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef jumps in a cycle of 1, 2, 3.
 * The sequence of positions reached:
 * Start: 0
 * Jump 1: 0 + 1 = 1
 * Jump 2: 1 + 2 = 3
 * Jump 3: 3 + 3 = 6
 * Jump 1: 6 + 1 = 7
 * Jump 2: 7 + 2 = 9
 * Jump 3: 9 + 3 = 12
 * 
 * The sum of one full cycle (1+2+3) is 6.
 * Let's look at the positions modulo 6:
 * 0 % 6 = 0
 * 1 % 6 = 1
 * 3 % 6 = 3
 * 6 % 6 = 0
 * 7 % 6 = 1
 * 9 % 6 = 3
 * 12 % 6 = 0
 * 
 * The reachable points are those where (a % 6) is 0, 1, or 3.
 * This pattern holds for all non-negative integers a.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    if (!(cin >> a)) return 0;

    long long rem = a % 6;
    if (rem == 0 || rem == 1 || rem == 3) {
        cout << "yes" << "\n";
    } else {
        cout << "no" << "\n";
    }

    return 0;
}