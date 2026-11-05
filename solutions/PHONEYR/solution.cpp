#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks us to take a year X (1973 <= X <= 2024) and output 'K' 
 * followed by the last two digits of X.
 * 
 * Approach:
 * 1. Read the integer X.
 * 2. Extract the last two digits using the modulo operator: X % 100.
 * 3. Print 'K' followed by the two digits. 
 * 4. Since the last two digits can be less than 10 (e.g., 2005 -> 05), 
 *    we must ensure we print them with a leading zero if necessary.
 *    Using printf("%02d", X % 100) or setting the width/fill in cout 
 *    is the standard way to handle this.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (!(cin >> X)) return 0;

    // Extract the last two digits
    int lastTwo = X % 100;

    // Output 'K' followed by the two digits, ensuring leading zero if < 10
    cout << "K";
    if (lastTwo < 10) {
        cout << "0" << lastTwo << "\n";
    } else {
        cout << lastTwo << "\n";
    }

    return 0;
}