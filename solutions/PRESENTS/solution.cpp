#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef gets every 5th gift free for every 4 gifts purchased.
 * This means in every block of 5 gifts, Chef pays for 4.
 * 
 * Let N be the total number of gifts.
 * The number of full blocks of 5 gifts is (N / 5).
 * For each block, Chef pays 4 coins.
 * The remaining gifts (N % 5) must be paid for individually.
 * 
 * Total coins = (N / 5) * 4 + (N % 5).
 * 
 * Constraints:
 * N <= 10^9, so N fits in a standard 32-bit integer, but using long long 
 * is safer and good practice in competitive programming to avoid overflow 
 * during intermediate calculations.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;

        // Calculate number of full groups of 5
        long long groups = n / 5;
        // Calculate remaining gifts
        long long remainder = n % 5;

        // Total cost calculation
        long long coins = (groups * 4) + remainder;

        cout << coins << "\n";
    }

    return 0;
}