#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef runs X km before resting.
 * Total distance is Y km.
 * Chef stops at X, 2X, 3X, ... as long as the distance is strictly less than Y.
 * 
 * If Y <= X, Chef reaches the finish line without stopping (0 stops).
 * If Y > X, the number of stops is floor((Y - 1) / X).
 * 
 * Example 1: X=1, Y=2. (2-1)/1 = 1. Correct.
 * Example 2: X=2, Y=5. (5-1)/2 = 4/2 = 2. Correct.
 * Example 3: X=3, Y=3. (3-1)/3 = 0. Correct.
 * Example 4: X=4, Y=3. (3-1)/4 = 0. Correct.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    // The problem description implies a single line of input per test case,
    // but standard competitive programming practice often involves a test case count.
    // Given the constraints and format, we read X and Y directly.
    if (!(cin >> X >> Y)) return 0;

    if (Y <= X) {
        cout << 0 << "\n";
    } else {
        // The number of stops is the number of multiples of X strictly less than Y.
        // This is equivalent to (Y - 1) / X using integer division.
        cout << (Y - 1) / X << "\n";
    }

    return 0;
}