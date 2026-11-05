#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef can cover a total distance of (D * d) km in D days.
 * Categories:
 * 10 km -> Prize A
 * 21 km -> Prize B
 * 42 km -> Prize C
 * 
 * Since A < B < C, we check the categories in descending order of distance
 * to find the maximum prize Chef can win.
 * 
 * Total distance = D * d
 * If (D * d) >= 42, prize is C.
 * Else if (D * d) >= 21, prize is B.
 * Else if (D * d) >= 10, prize is A.
 * Else, prize is 0.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long D, d, A, B, C;
        cin >> D >> d >> A >> B >> C;

        long long total_distance = D * d;

        if (total_distance >= 42) {
            cout << C << "\n";
        } else if (total_distance >= 21) {
            cout << B << "\n";
        } else if (total_distance >= 10) {
            cout << A << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}