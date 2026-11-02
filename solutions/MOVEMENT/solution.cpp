#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Starting position: (0, 0)
 * 1. Move A units along positive X: (0 + A, 0)
 * 2. Move B units along positive Y: (A, 0 + B)
 * 3. Move C units along negative X: (A - C, B)
 * 4. Move D units along negative Y: (A - C, B - D)
 * 
 * Final position: (A - C, B - D)
 * Constraints: 1 <= A, B, C, D <= 10.
 * Integer overflow is not possible with these constraints, but using long long is good practice.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B, C, D;
    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice often involves checking if 
    // multiple test cases are provided. Given the constraints and description,
    // we read the four integers directly.
    if (cin >> A >> B >> C >> D) {
        long long finalX = A - C;
        long long finalY = B - D;
        cout << finalX << " " << finalY << "\n";
    }

    return 0;
}