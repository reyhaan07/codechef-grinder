#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Limak eats 1, 3, 5, ... (odd turns)
 * Bob eats 2, 4, 6, ... (even turns)
 * Limak total limit: A
 * Bob total limit: B
 * 
 * We can simulate the game turn by turn. Since A and B are at most 1000,
 * the number of turns will be very small (at most ~64, since sum of 1..n is n^2/2,
 * and 45^2/2 is ~1000). Simulation is O(sqrt(max(A, B))) per test case,
 * which is well within the time limit.
 */

void solve() {
    int A, B;
    cin >> A >> B;

    int limak_eaten = 0;
    int bob_eaten = 0;
    int turn = 1;

    while (true) {
        if (turn % 2 != 0) {
            // Limak's turn
            if (limak_eaten + turn > A) {
                cout << "Bob" << "\n";
                return;
            }
            limak_eaten += turn;
        } else {
            // Bob's turn
            if (bob_eaten + turn > B) {
                cout << "Limak" << "\n";
                return;
            }
            bob_eaten += turn;
        }
        turn++;
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}