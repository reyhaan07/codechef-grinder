#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a right-angled triangle scenario where:
 * - B is the base (distance between the two feet of the ladder).
 * - LS is the length of one side (hypotenuse or leg).
 * - RS is the length of the other side (hypotenuse or leg).
 * 
 * Let H be the height of the ladder where the two sides meet.
 * 1. If LS is the hypotenuse and B is a leg:
 *    H^2 + B^2 = LS^2 => H = sqrt(LS^2 - B^2)
 *    Then RS is the hypotenuse of a triangle with legs H and B:
 *    RS^2 = H^2 + B^2 (Wait, this is not the right approach).
 * 
 * Let's re-evaluate:
 * The ladder forms a triangle with sides LS, RS, and base B.
 * Let H be the vertical height from the ground to the top of the ladder.
 * The base B is split into two segments x and y such that x + y = B.
 * LS^2 = H^2 + x^2
 * RS^2 = H^2 + y^2
 * 
 * Minimum RS: Occurs when the ladder is as "flat" as possible.
 * This happens when the height H is minimized. 
 * If LS > B, the smallest H is 0, but the triangle must exist.
 * Actually, the minimum RS occurs when the triangle is right-angled with RS as a leg.
 * RS^2 + B^2 = LS^2 => RS = sqrt(LS^2 - B^2)
 * 
 * Maximum RS: Occurs when the ladder is as "steep" as possible.
 * This happens when the other side (LS) is vertical.
 * RS^2 = LS^2 + B^2 => RS = sqrt(LS^2 + B^2)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        double B, LS;
        cin >> B >> LS;

        // Minimum RS: sqrt(LS^2 - B^2)
        // Maximum RS: sqrt(LS^2 + B^2)
        double min_rs = sqrt(abs(LS * LS - B * B));
        double max_rs = sqrt(LS * LS + B * B);

        cout << fixed << setprecision(5) << min_rs << " " << max_rs << "\n";
    }

    return 0;
}