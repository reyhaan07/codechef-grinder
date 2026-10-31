#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each plane carries 100 passengers.
 * To carry N passengers, the total number of planes required is ceil(N / 100).
 * Using integer arithmetic, ceil(N / 100) can be calculated as (N + 99) / 100.
 * Let total_needed = (N + 99) / 100.
 * If the airline already has X planes, the number of new planes to buy is:
 * max(0, total_needed - X).
 * 
 * Constraints:
 * X, N <= 10^6. The calculations fit within standard 32-bit integers, 
 * but long long is used for safety and best practice.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, n;
        cin >> x >> n;

        // Calculate total planes required using ceiling division
        long long total_needed = (n + 99) / 100;

        // Calculate planes to purchase
        long long to_buy = total_needed - x;

        // If to_buy is negative, it means we have more than enough planes
        if (to_buy < 0) {
            cout << 0 << "\n";
        } else {
            cout << to_buy << "\n";
        }
    }

    return 0;
}