#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Speed Limit Test
 * Speed = Distance / Time
 * Alice's speed = A / X
 * Bob's speed = B / Y
 * To compare A/X and B/Y without floating point precision issues, 
 * we compare A * Y and B * X.
 * If A * Y > B * X, Alice is faster.
 * If A * Y < B * X, Bob is faster.
 * If A * Y == B * X, they are equal.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long A, X, B, Y;
        cin >> A >> X >> B >> Y;

        // Using cross-multiplication to avoid floating point division
        // Alice speed: A/X, Bob speed: B/Y
        // Compare A*Y and B*X
        long long alice_val = A * Y;
        long long bob_val = B * X;

        if (alice_val > bob_val) {
            cout << "ALICE" << "\n";
        } else if (bob_val > alice_val) {
            cout << "BOB" << "\n";
        } else {
            cout << "EQUAL" << "\n";
        }
    }

    return 0;
}