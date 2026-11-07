#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have R red, B blue, and G green gems.
 * Each gem sells for 3 coins individually.
 * A bundle of (1R, 1B, 1G) sells for 10 coins.
 * 
 * Let k be the number of bundles we make.
 * k can range from 0 to min(R, B, G).
 * If we make k bundles, we use k of each gem.
 * Remaining gems: (R-k) red, (B-k) blue, (G-k) green.
 * Total coins = (k * 10) + ((R-k) + (B-k) + (G-k)) * 3
 * Total coins = 10k + 3(R + B + G - 3k)
 * Total coins = 10k + 3(R + B + G) - 9k
 * Total coins = 3(R + B + G) + k
 * 
 * To maximize this, we should maximize k.
 * Therefore, k = min(R, min(B, G)).
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long r, b, g;
        cin >> r >> b >> g;

        // Calculate maximum number of bundles possible
        long long k = min({r, b, g});

        // Calculate total coins
        // Each bundle gives 10 coins, replacing 3 gems that would have been 9 coins.
        // Effectively, each bundle adds 1 extra coin compared to selling individually.
        long long total_coins = (r + b + g) * 3 + k;

        cout << total_coins << "\n";
    }

    return 0;
}