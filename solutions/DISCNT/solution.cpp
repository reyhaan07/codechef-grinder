#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The original price of the toy is 100.
 * A discount of x percent means the discount amount is (x/100) * 100 = x.
 * The final price Alice needs to pay is 100 - x.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 0 <= x < 100
 * 
 * Since x is an integer and the result will always be an integer (100 - x),
 * standard integer arithmetic is sufficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // The price to pay is 100 - x
        int final_price = 100 - x;
        
        cout << final_price << "\n";
    }

    return 0;
}