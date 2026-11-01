#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Grade Z: Attendance (X) < 50
 * - Grade F: Attendance (X) >= 50 AND Marks (Y) < 50
 * - Grade A: Otherwise (Attendance >= 50 AND Marks >= 50)
 * 
 * Constraints: 1 <= T <= 10^4, 1 <= X, Y <= 100
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        if (x < 50) {
            cout << "Z" << "\n";
        } else if (y < 50) {
            cout << "F" << "\n";
        } else {
            cout << "A" << "\n";
        }
    }
    
    return 0;
}