#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to buy X fruits in total, choosing from three types with prices A, B, and C.
 * We must have at least 2 different kinds of fruits.
 * To minimize the cost, we should buy as many fruits as possible at the cheapest price,
 * and at least one fruit of the second cheapest price.
 * 
 * Let the sorted prices be p1 <= p2 <= p3.
 * To satisfy the condition of having at least two kinds:
 * 1. We buy 1 fruit of price p2 and (X-1) fruits of price p1.
 *    Total cost: p2 + (X-1) * p1.
 * 
 * Since we have three types, we could also consider buying 1 of p2, 1 of p3, and (X-2) of p1,
 * but that is always >= p2 + (X-1) * p1 because p3 >= p1.
 * Thus, the optimal strategy is to pick the two cheapest prices, say p1 and p2,
 * and buy (X-1) of p1 and 1 of p2.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, a, b, c;
        cin >> x >> a >> b >> c;

        // Store prices in a vector and sort them to easily identify the cheapest ones
        vector<long long> prices = {a, b, c};
        sort(prices.begin(), prices.end());

        // The cheapest price is prices[0], second cheapest is prices[1].
        // We buy 1 of the second cheapest and (x-1) of the cheapest.
        long long min_cost = prices[0] * (x - 1) + prices[1];

        cout << min_cost << "\n";
    }

    return 0;
}