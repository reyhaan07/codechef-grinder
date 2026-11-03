#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers A and B representing slices of cake.
 * While A != B, Charlie eats half (rounded up) of the larger pile.
 * Since A and B are small (up to 100), a direct simulation is efficient.
 * The number of slices eaten will not exceed the initial sum of A and B,
 * so 'int' is sufficient, but 'long long' is used for safety.
 */

void solve() {
    long long A, B;
    if (!(cin >> A >> B)) return;

    long long total_eaten = 0;

    // While Alice and Bob have different amounts of cake, Charlie eats.
    while (A != B) {
        if (A > B) {
            // Charlie eats half of Alice's slices, rounded up.
            // ceil(A / 2.0) is equivalent to (A + 1) / 2 using integer division.
            long long eaten = (A + 1) / 2;
            total_eaten += eaten;
            A -= eaten;
        } else {
            // Charlie eats half of Bob's slices, rounded up.
            long long eaten = (B + 1) / 2;
            total_eaten += eaten;
            B -= eaten;
        }
    }

    cout << total_eaten << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}