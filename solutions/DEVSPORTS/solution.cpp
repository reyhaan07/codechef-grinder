#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Devendra starts with Z amount and has already spent Y.
 * Remaining budget = Z - Y.
 * He needs to spend A + B + C on the three water sports.
 * He can afford them if (Z - Y) >= (A + B + C).
 * 
 * Constraints:
 * Z <= 10^5, Y <= 10^5, A, B, C <= 5000.
 * The sum A + B + C <= 15000.
 * All values fit within a standard 32-bit integer, but using long long 
 * is a safe practice in competitive programming to prevent overflow.
 */

void solve() {
    long long Z, Y, A, B, C;
    if (!(cin >> Z >> Y >> A >> B >> C)) return;

    // Calculate remaining money after initial expenses
    long long remaining_budget = Z - Y;
    
    // Calculate total cost of the three sports
    long long total_sports_cost = A + B + C;

    // Check if he has enough money
    if (remaining_budget >= total_sports_cost) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}