#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The surface area of a rectangular box with dimensions H, L, and W is given by:
 * Surface Area = 2 * (H*L + L*W + W*H)
 * 
 * Chef has a total area of 1000 square centimeters.
 * To find the maximum number of complete gifts, we divide the total area by 
 * the surface area of one gift and take the floor of the result.
 * 
 * Constraints:
 * T <= 1000
 * 1 <= H, L, W <= 10
 * Surface area will be at most 2 * (10*10 + 10*10 + 10*10) = 600.
 * The result will fit in a standard integer.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long h, l, w;
        cin >> h >> l >> w;

        // Calculate surface area of one gift
        // Formula: 2 * (HL + LW + WH)
        long long surface_area = 2 * (h * l + l * w + w * h);

        // Total available paper area
        long long total_area = 1000;

        // Calculate maximum number of gifts
        long long max_gifts = total_area / surface_area;

        cout << max_gifts << "\n";
    }

    return 0;
}