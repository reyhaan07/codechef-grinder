#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Initial Selling Price = X
 * Initial Profit = Y
 * Buying Price (Cost Price) = X - Y
 * 
 * New Selling Price = X + 10% of X = X + 0.1 * X = 1.1 * X
 * New Profit = New Selling Price - Buying Price
 * New Profit = (1.1 * X) - (X - Y)
 * New Profit = 1.1 * X - X + Y
 * New Profit = 0.1 * X + Y
 * 
 * Since X is a multiple of 100, 0.1 * X will always be an integer.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
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
        
        // Calculate the increase in price
        long long price_increase = x / 10;
        
        // New profit is original profit + the increase in selling price
        // (Since cost price remains constant)
        long long new_profit = y + price_increase;
        
        cout << new_profit << "\n";
    }
    
    return 0;
}