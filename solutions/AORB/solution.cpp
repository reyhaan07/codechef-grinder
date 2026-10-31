#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has two problems, A and B.
 * Initial points: A = 500, B = 1000.
 * Decay rates: A = 2 points/min, B = 4 points/min.
 * 
 * Order 1: A then B
 * Time to finish A: X
 * Time to finish B: X + Y
 * Points A: 500 - (X * 2)
 * Points B: 1000 - ((X + Y) * 4)
 * Total 1: 500 - 2X + 1000 - 4X - 4Y = 1500 - 6X - 4Y
 * 
 * Order 2: B then A
 * Time to finish B: Y
 * Time to finish A: X + Y
 * Points B: 1000 - (Y * 4)
 * Points A: 500 - ((X + Y) * 2)
 * Total 2: 1000 - 4Y + 500 - 2X - 2Y = 1500 - 2X - 6Y
 * 
 * We need to calculate both and return the maximum.
 */

void solve() {
    long long X, Y;
    cin >> X >> Y;

    // Order A -> B
    long long score1 = (500 - 2 * X) + (1000 - 4 * (X + Y));
    
    // Order B -> A
    long long score2 = (1000 - 4 * Y) + (500 - 2 * (X + Y));

    cout << max(score1, score2) << "\n";
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