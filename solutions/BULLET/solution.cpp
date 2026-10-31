#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Bullet speed = X pixels/frame (or pixels/second, as implied by the context).
 * - Distance to goomba = Y pixels.
 * - Time taken for bullet to travel = Y / X seconds.
 * - Mario wants the bullet to hit the goomba at time T_hit >= Z.
 * - Let T_shoot be the time Mario waits before firing.
 * - T_hit = T_shoot + (Y / X).
 * - We need T_shoot + (Y / X) >= Z.
 * - T_shoot >= Z - (Y / X).
 * - Since T_shoot cannot be negative, T_shoot = max(0, Z - (Y / X)).
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        // Calculate travel time of the bullet
        long long travel_time = y / x;

        // Calculate the required wait time
        // If travel_time is already >= z, wait time is 0.
        // Otherwise, wait time is z - travel_time.
        long long wait_time = z - travel_time;

        if (wait_time < 0) {
            cout << 0 << "\n";
        } else {
            cout << wait_time << "\n";
        }
    }

    return 0;
}