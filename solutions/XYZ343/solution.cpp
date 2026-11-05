#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X income sources, each providing Y rupees.
 * Total potential income = X * Y.
 * The bank limit is Z.
 * If (X * Y) <= Z, Chef doesn't need to reduce any sources (0).
 * If (X * Y) > Z, Chef needs to reduce the number of sources (let's say k) 
 * such that (X - k) * Y <= Z.
 * 
 * Rearranging the inequality:
 * (X - k) * Y <= Z
 * X - k <= Z / Y
 * k >= X - (Z / Y)
 * 
 * Since we want the minimum k, we need the smallest integer k such that:
 * k >= X - floor(Z / Y)
 * Also, k cannot be negative, so k = max(0, X - floor(Z / Y)).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long X, Y, Z;
        cin >> X >> Y >> Z;

        // Total income is X * Y.
        // We need to find the minimum number of sources to remove (k)
        // such that (X - k) * Y <= Z.
        
        long long total_income = X * Y;
        
        if (total_income <= Z) {
            cout << 0 << "\n";
        } else {
            // We need (X - k) * Y <= Z
            // X - k <= Z / Y
            // k >= X - Z / Y
            // Since we want the minimum integer k, we use integer division
            // which acts as floor(Z / Y).
            long long k = X - (Z / Y);
            cout << k << "\n";
        }
    }

    return 0;
}