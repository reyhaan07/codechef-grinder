#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given A and B. We need to find the number of pairs (X, Y) such that 
 * 1 <= X <= A, 1 <= Y <= B, and (X + Y) is even.
 * 
 * (X + Y) is even if:
 * 1. Both X and Y are even.
 * 2. Both X and Y are odd.
 * 
 * Let:
 * oddA = number of odd integers in [1, A] = (A + 1) / 2
 * evenA = number of even integers in [1, A] = A / 2
 * oddB = number of odd integers in [1, B] = (B + 1) / 2
 * evenB = number of even integers in [1, B] = B / 2
 * 
 * The number of pairs where both are even is evenA * evenB.
 * The number of pairs where both are odd is oddA * oddB.
 * Total valid pairs = (evenA * evenB) + (oddA * oddB).
 * 
 * Constraints: A, B <= 10^9. The product can be up to 10^18, so we must use 
 * 'long long' to prevent integer overflow.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long A, B;
        cin >> A >> B;

        long long oddA = (A + 1) / 2;
        long long evenA = A / 2;
        long long oddB = (B + 1) / 2;
        long long evenB = B / 2;

        long long result = (evenA * evenB) + (oddA * oddB);
        cout << result << "\n";
    }

    return 0;
}