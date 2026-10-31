#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Bull or Bear
 * Logic:
 * If selling price (Y) > buying price (X), it is a PROFIT.
 * If selling price (Y) < buying price (X), it is a LOSS.
 * If selling price (Y) == buying price (X), it is NEUTRAL.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        if (y > x) {
            cout << "PROFIT" << "\n";
        } else if (y < x) {
            cout << "LOSS" << "\n";
        } else {
            cout << "NEUTRAL" << "\n";
        }
    }
    
    return 0;
}