#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The boss has health H.
 * Normal attack deals X damage.
 * Special attack deals Y damage (can be used at most once).
 * 
 * Strategy:
 * 1. Option 1: Use only normal attacks.
 *    Number of attacks = ceil(H / X).
 *    Using integer arithmetic: (H + X - 1) / X.
 * 
 * 2. Option 2: Use the special attack once, then normal attacks for the remainder.
 *    Remaining health after special attack = H - Y.
 *    If H - Y <= 0, total attacks = 1.
 *    Otherwise, total attacks = 1 + ceil((H - Y) / X).
 *    Using integer arithmetic: 1 + (H - Y + X - 1) / X.
 * 
 * Since we want the minimum number of attacks, we take the minimum of these two options.
 */

void solve() {
    long long H, X, Y;
    if (!(cin >> H >> X >> Y)) return;

    // Option 1: Only normal attacks
    long long attacks_only_normal = (H + X - 1) / X;

    // Option 2: Special attack + normal attacks
    long long attacks_with_special;
    if (H <= Y) {
        attacks_with_special = 1;
    } else {
        long long remaining_health = H - Y;
        attacks_with_special = 1 + (remaining_health + X - 1) / X;
    }

    cout << min(attacks_only_normal, attacks_with_special) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}