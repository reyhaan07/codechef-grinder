#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Initial temperature: X
 * Initial solubility: A g / 100 mL
 * Solubility increase per degree: B g / 100 mL
 * Target temperature: 100 degrees
 * Total water: 1 liter = 1000 mL
 * 
 * Solubility at 100 degrees = A + (100 - X) * B (g / 100 mL)
 * Since we have 1000 mL of water, the total sugar = (Solubility at 100) * (1000 / 100)
 * Total sugar = (A + (100 - X) * B) * 10
 * 
 * Constraints:
 * X: 31 to 40
 * A: 101 to 120
 * B: 1 to 5
 * Max value calculation: (120 + (100 - 31) * 5) * 10 = (120 + 345) * 10 = 4650
 * The result fits comfortably in a standard integer, but using long long is safe practice.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long X, A, B;
        cin >> X >> A >> B;

        // Calculate solubility at 100 degrees per 100 mL
        long long solubility_at_100 = A + (100 - X) * B;

        // Calculate total sugar for 1 liter (1000 mL)
        // Since solubility is per 100 mL, we multiply by 10
        long long total_sugar = solubility_at_100 * 10;

        cout << total_sugar << "\n";
    }

    return 0;
}