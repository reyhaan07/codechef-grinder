#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a 2-digit integer X (10 <= X <= 99).
 * A 2-digit integer is varied if its tens digit is different from its units digit.
 * Let the number be represented as 10*a + b, where a is the tens digit and b is the units digit.
 * We need to check if a != b.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (!(cin >> X)) return 0;

    // Extract digits
    int tens = X / 10;
    int units = X % 10;

    // Check if digits are different
    if (tens != units) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}