#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have three boxes with sizes A, B, C and bags of size D.
 * Constraints: 1 <= A <= B <= C <= D <= 100.
 * 
 * Logic:
 * 1. If A + B + C <= D, we can fit all in 1 bag.
 * 2. If A + B + C > D, we check if we can fit them in 2 bags:
 *    - Can we fit (A + B) in one and C in another? (A + B <= D)
 *    - Can we fit (A + C) in one and B in another? (A + C <= D)
 *    - Can we fit (B + C) in one and A in another? (B + C <= D)
 *    Since A <= B <= C, if any pair fits, it will be (A + B) <= D.
 *    If (A + B) <= D, we need 2 bags.
 * 3. If neither of the above works, we need 3 bags.
 */

void solve() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    // Case 1: All three fit in one bag
    if (A + B + C <= D) {
        cout << 1 << "\n";
    }
    // Case 2: Check if two bags are sufficient
    // Since A <= B <= C, the smallest sum of two is A + B.
    // If A + B <= D, we can put A and B in one bag, and C in another.
    else if (A + B <= D) {
        cout << 2 << "\n";
    }
    // Case 3: Otherwise, each box needs its own bag
    else {
        cout << 3 << "\n";
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