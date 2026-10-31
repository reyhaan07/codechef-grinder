#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Final Population
 * Logic: The final population is calculated as (Initial Population - People Left + People Immigrated).
 * Formula: Final = X - Y + Z
 * Constraints are small (up to 10), so standard integer types are sufficient.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        if (cin >> x >> y >> z) {
            // Calculate final population
            long long final_population = x - y + z;
            cout << final_population << "\n";
        }
    }

    return 0;
}