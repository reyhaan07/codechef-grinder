#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: HOTCOLD
 * Logic: If temperature C > 20, output HOT, else output COLD.
 * Constraints: 0 <= C <= 40, T <= 50.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int c;
        cin >> c;
        
        // Check if temperature is strictly greater than 20
        if (c > 20) {
            cout << "HOT" << "\n";
        } else {
            cout << "COLD" << "\n";
        }
    }
    
    return 0;
}