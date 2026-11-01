#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef starts with an income of 2^X.
 * For each expense i (from 1 to N):
 * - He spends 50% of the current remaining amount.
 * - This is equivalent to dividing the current amount by 2.
 * 
 * After N expenses, the remaining amount will be:
 * (2^X) / (2^N) = 2^(X - N)
 * 
 * Constraints:
 * 1 <= N < X <= 20
 * Since X is at most 20, 2^20 is approximately 10^6, which fits in a standard integer.
 * Using long long is safe and good practice.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, x;
        cin >> n >> x;

        // The initial income is 2^X.
        // After each expense, the remaining amount is halved.
        // After N expenses, the remaining amount is 2^X / 2^N = 2^(X-N).
        
        // Calculate 2^(X-N) using bitwise shift
        long long savings = 1LL << (x - n);
        
        cout << savings << "\n";
    }

    return 0;
}