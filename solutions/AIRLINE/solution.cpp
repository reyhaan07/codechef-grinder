#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has three bags with weights A, B, and C.
 * She must check-in two bags (sum <= D) and carry one bag (weight <= E).
 * There are three possible scenarios for which bag is carried:
 * 1. Carry A: Check-in B and C. Condition: (B + C <= D) && (A <= E)
 * 2. Carry B: Check-in A and C. Condition: (A + C <= D) && (B <= E)
 * 3. Carry C: Check-in A and B. Condition: (A + B <= D) && (C <= E)
 * 
 * If any of these scenarios are true, output "YES", otherwise "NO".
 * Constraints are small (A, B, C <= 10), so simple conditional checks are O(1).
 */

void solve() {
    int A, B, C, D, E;
    if (!(cin >> A >> B >> C >> D >> E)) return;

    // Check all three possible combinations
    bool can_carry_A = (B + C <= D) && (A <= E);
    bool can_carry_B = (A + C <= D) && (B <= E);
    bool can_carry_C = (A + B <= D) && (C <= E);

    if (can_carry_A || can_carry_B || can_carry_C) {
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