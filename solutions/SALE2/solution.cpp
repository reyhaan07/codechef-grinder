#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef gets 1 item free for every 2 items purchased.
 * This means in every group of 3 items, Chef only pays for 2.
 * 
 * For N items:
 * - Number of full groups of 3 is (N / 3).
 * - For each of these groups, Chef pays for 2 items: cost = (N / 3) * 2 * X.
 * - The remaining items (N % 3) must be paid for individually: cost = (N % 3) * X.
 * 
 * Total cost = ((N / 3) * 2 + (N % 3)) * X.
 * 
 * Constraints:
 * N, X <= 1000. The result will fit in a standard integer, but using long long
 * is good practice to prevent overflow in similar problems.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        // Calculate number of items paid for
        // Every 3 items, pay for 2.
        // Number of paid items = (n / 3) * 2 + (n % 3)
        long long paid_items = (n / 3) * 2 + (n % 3);
        
        long long total_cost = paid_items * x;
        
        cout << total_cost << "\n";
    }

    return 0;
}