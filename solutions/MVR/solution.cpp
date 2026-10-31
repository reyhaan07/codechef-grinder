#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Messi's points = (A * 2) + B
 * Ronaldo's points = (X * 2) + Y
 * We need to compare these two values and print "Messi", "Ronaldo", or "Equal".
 * 
 * Constraints: 0 <= A, B, X, Y <= 100.
 * Maximum possible points = 100 * 2 + 100 = 300.
 * This fits well within a standard integer type, but using long long is safe practice.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B, X, Y;
    if (!(cin >> A >> B >> X >> Y)) return 0;

    long long messi_points = (A * 2) + B;
    long long ronaldo_points = (X * 2) + Y;

    if (messi_points > ronaldo_points) {
        cout << "Messi" << "\n";
    } else if (ronaldo_points > messi_points) {
        cout << "Ronaldo" << "\n";
    } else {
        cout << "Equal" << "\n";
    }

    return 0;
}