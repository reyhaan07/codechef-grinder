#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The game starts with X and lasts for Y moves.
 * In each move, the player can change X to X+1 or X-1.
 * Changing X by 1 changes the parity of X.
 * After Y moves, the final parity depends on the initial parity of X and the number of moves Y.
 * Specifically, if we perform Y moves, the final number will have the same parity as (X + Y) 
 * if we were just adding Y, but since players can choose +1 or -1, they are essentially 
 * choosing whether to flip the parity or not.
 * 
 * However, since both players play optimally:
 * - Janmansh wants the final result to be even.
 * - Jay wants the final result to be odd.
 * 
 * Let's look at the parity:
 * If (X + Y) is even, Janmansh can ensure the final result is even.
 * If (X + Y) is odd, Jay can ensure the final result is odd.
 * 
 * Proof:
 * Each move flips the parity of the current number.
 * After Y moves, the parity of the final number is (X + Y) mod 2.
 * Since the players can choose to either increment or decrement, they can effectively 
 * control the parity if they were the only ones playing. With alternating turns, 
 * the parity of the final result is fixed by the parity of (X + Y).
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        // The final parity is determined by (X + Y) % 2.
        // If (X + Y) is even, the result is even (Janmansh wins).
        // If (X + Y) is odd, the result is odd (Jay wins).
        if ((x + y) % 2 == 0) {
            cout << "Janmansh" << "\n";
        } else {
            cout << "Jay" << "\n";
        }
    }

    return 0;
}