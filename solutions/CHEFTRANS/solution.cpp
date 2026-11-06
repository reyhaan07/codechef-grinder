#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CHEFTRANS
 * Logic:
 * The time taken for the plane and bus route is (X + Y).
 * The time taken for the train route is Z.
 * We need to compare (X + Y) and Z.
 * Since X, Y, Z can be up to 10^9, X + Y can be up to 2 * 10^9.
 * This fits within a standard 32-bit signed integer, but using long long
 * is safer and good practice in competitive programming to prevent overflow.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        long long plane_bus_time = x + y;

        if (plane_bus_time < z) {
            cout << "PLANEBUS" << "\n";
        } else if (z < plane_bus_time) {
            cout << "TRAIN" << "\n";
        } else {
            cout << "EQUAL" << "\n";
        }
    }

    return 0;
}