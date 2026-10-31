#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each subscription covers 6 people.
 * If there are N people, the number of subscriptions required is ceil(N / 6).
 * Using integer arithmetic, ceil(N / 6) can be calculated as (N + 5) / 6.
 * Total cost = (number of subscriptions) * X.
 * 
 * Constraints:
 * N <= 100, X <= 1000.
 * The maximum cost would be ceil(100/6) * 1000 = 17 * 1000 = 17000.
 * This fits well within a standard 32-bit integer, but using long long is safe practice.
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

        // Calculate number of subscriptions needed using ceiling division
        // (n + 5) / 6 is equivalent to ceil(n / 6.0) for integers
        long long subscriptions = (n + 5) / 6;
        
        // Calculate total cost
        long long total_cost = subscriptions * x;
        
        cout << total_cost << "\n";
    }

    return 0;
}