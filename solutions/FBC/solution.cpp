#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The bucket has a total capacity of K liters.
 * It currently contains X liters of water.
 * To find the maximum extra water that can be added without overflowing,
 * we need to calculate the difference between the total capacity and the current amount.
 * Formula: Extra Water = K - X
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X < K <= 1000
 * Since K and X are small (up to 1000), standard 'int' is sufficient.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int k, x;
        cin >> k >> x;
        
        // The amount of extra water is the capacity minus the current volume.
        int extra_water = k - x;
        
        cout << extra_water << "\n";
    }
    
    return 0;
}