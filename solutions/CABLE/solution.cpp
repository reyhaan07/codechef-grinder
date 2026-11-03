#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Volume Comparison
 * The volume of a cuboid is given by V_cuboid = A * B * C.
 * The volume of a cube is given by V_cube = X * X * X.
 * We need to compare these two values and output "Cuboid", "Cube", or "Equal".
 * Constraints are small (1 <= A, B, C, X <= 10), so standard integer types are sufficient,
 * but using long long is good practice to prevent overflow in similar problems.
 */

void solve() {
    long long A, B, C, X;
    if (!(cin >> A >> B >> C >> X)) return;

    long long vol_cuboid = A * B * C;
    long long vol_cube = X * X * X;

    if (vol_cuboid > vol_cube) {
        cout << "Cuboid" << "\n";
    } else if (vol_cube > vol_cuboid) {
        cout << "Cube" << "\n";
    } else {
        cout << "Equal" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the input format,
    // but we structure it to handle the input as specified.
    solve();

    return 0;
}