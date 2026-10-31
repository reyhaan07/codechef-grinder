#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks for the minimum number of button presses to change volume from X to Y.
 * Each press changes the volume by exactly 1.
 * Therefore, the minimum number of presses is the absolute difference between X and Y.
 * |X - Y| gives the distance between the two values, which corresponds to the 
 * number of +1 or -1 operations required.
 * 
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
        
        // The minimum number of button presses is the absolute difference
        long long result = abs(x - y);
        
        cout << result << "\n";
    }
    
    return 0;
}