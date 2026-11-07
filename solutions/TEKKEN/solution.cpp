#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Anna (A), Bob (B), and Claudio (C) fight in pairs.
 * Each fight reduces both players' health by min(X, Y).
 * Effectively, the winner of a fight (the one with more health) 
 * loses an amount equal to the loser's health, and the loser's health 
 * becomes 0.
 * 
 * To maximize Anna's final health, we want her to face the opponents 
 * after they have potentially weakened each other.
 * 
 * Strategy:
 * 1. Let Bob and Claudio fight first. The survivor will have health 
 *    abs(B - C).
 * 2. Anna then fights the survivor.
 * 3. Anna's final health will be A - abs(B - C).
 * 4. Anna has positive health if A > abs(B - C).
 * 
 * This covers all permutations because the order of the first fight 
 * between B and C doesn't change the outcome of their interaction 
 * (one becomes 0, the other becomes |B-C|).
 */

void solve() {
    long long A, B, C;
    if (!(cin >> A >> B >> C)) return;

    // First, Bob and Claudio fight.
    // The survivor has health equal to abs(B - C).
    long long survivor_BC = abs(B - C);

    // Then Anna fights the survivor.
    // Anna's final health = A - min(A, survivor_BC)
    // Anna has positive health if A > survivor_BC
    if (A > survivor_BC) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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