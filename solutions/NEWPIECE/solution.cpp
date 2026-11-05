#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A cell (i, j) is white if (i + j) is even, and black if (i + j) is odd.
 * The piece can move from (A, B) to (P, Q) in 1 move if they have different colors.
 * 
 * Let color(A, B) = (A + B) % 2.
 * Let color(P, Q) = (P + Q) % 2.
 * 
 * Case 1: (A, B) == (P, Q)
 * The piece is already at the destination. Moves = 0.
 * 
 * Case 2: color(A, B) != color(P, Q)
 * The piece can move directly from (A, B) to (P, Q) in 1 move.
 * 
 * Case 3: color(A, B) == color(P, Q) and (A, B) != (P, Q)
 * The piece cannot move directly. It must move to a cell of a different color first,
 * and then to the destination. Since there are always cells of different colors 
 * available on an 8x8 board, it takes 2 moves.
 */

void solve() {
    int A, B, P, Q;
    cin >> A >> B >> P >> Q;

    if (A == P && B == Q) {
        cout << 0 << "\n";
    } else {
        int color1 = (A + B) % 2;
        int color2 = (P + Q) % 2;

        if (color1 != color2) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}