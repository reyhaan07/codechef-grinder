#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to make X divisible by 10.
 * A number is divisible by 10 if it is divisible by both 2 and 5.
 * 
 * Case 1: If X % 10 == 0, it is already divisible by 10. Turns = 0.
 * Case 2: If X % 10 == 5, multiplying by 2 once makes it (X * 2) % 10 == 0. Turns = 1.
 * Case 3: If X % 5 != 0 (and not divisible by 10), multiplying by 2 will never 
 *         introduce a factor of 5. Turns = -1.
 * Case 4: If X % 2 == 0 but X % 10 != 0 (i.e., X ends in 2, 4, 6, 8), 
 *         multiplying by 2 will keep the last digit even, but it will never 
 *         become 0 because there is no factor of 5. Turns = -1.
 */

void solve() {
    long long x;
    cin >> x;

    if (x % 10 == 0) {
        cout << 0 << "\n";
    } else if (x % 5 == 0) {
        // Since it's not divisible by 10 but is divisible by 5,
        // it must end in 5. Multiplying by 2 makes it end in 0.
        cout << 1 << "\n";
    } else {
        // If it's not divisible by 5, multiplying by 2 will never make it divisible by 10.
        cout << -1 << "\n";
    }
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