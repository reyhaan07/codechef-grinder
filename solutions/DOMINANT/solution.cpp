#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three integers N_A, N_B, and N_C.
 * An army is dominant if its size is strictly greater than the sum of the other two.
 * Specifically:
 * - A is dominant if N_A > N_B + N_C
 * - B is dominant if N_B > N_A + N_C
 * - C is dominant if N_C > N_A + N_B
 * 
 * We need to output "YES" if any of these conditions are true, otherwise "NO".
 * Constraints are small (up to 100), so standard integer types are sufficient.
 */

void solve() {
    int na, nb, nc;
    if (!(cin >> na >> nb >> nc)) return;

    // Check if any army is dominant
    if (na > (nb + nc) || nb > (na + nc) || nc > (na + nb)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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