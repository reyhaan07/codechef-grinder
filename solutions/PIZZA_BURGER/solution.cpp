#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Ashish has X rupees.
 * Pizza costs Y, Burger costs Z.
 * Preference: PIZZA > BURGER > NOTHING.
 * 
 * Logic:
 * 1. If X >= Y, he can afford Pizza. Since he prefers Pizza, he eats PIZZA.
 * 2. Else if X >= Z, he cannot afford Pizza but can afford Burger, so he eats BURGER.
 * 3. Otherwise, he cannot afford either, so he eats NOTHING.
 * 
 * Constraints:
 * T <= 100, X, Y, Z <= 100.
 * Standard integer types are sufficient as values are small.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        if (x >= y) {
            cout << "PIZZA" << "\n";
        } else if (x >= z) {
            cout << "BURGER" << "\n";
        } else {
            cout << "NOTHING" << "\n";
        }
    }
    
    return 0;
}