#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is at floor A with speed X. Time taken = A / X.
 * Chefina is at floor B with speed Y. Time taken = B / Y.
 * We need to compare A/X and B/Y.
 * To avoid floating point precision issues, we compare A/X and B/Y by cross-multiplying:
 * A/X < B/Y  <=> A * Y < B * X
 * A/X > B/Y  <=> A * Y > B * X
 * A/X == B/Y <=> A * Y == B * X
 * 
 * Constraints: A, B <= 100; X, Y <= 10.
 * A * Y and B * X will be at most 1000, which fits easily in an integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        // Time for Chef = a/x, Time for Chefina = b/y
        // Compare (a/x) and (b/y) using cross-multiplication: a*y vs b*x
        long long chef_time_val = a * y;
        long long chefina_time_val = b * x;

        if (chef_time_val < chefina_time_val) {
            cout << "Chef" << "\n";
        } else if (chefina_time_val < chef_time_val) {
            cout << "Chefina" << "\n";
        } else {
            cout << "Both" << "\n";
        }
    }

    return 0;
}