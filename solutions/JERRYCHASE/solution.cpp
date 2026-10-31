#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Tom can catch Jerry if and only if Tom's speed (Y) is strictly greater 
 * than Jerry's speed (X).
 * If Y > X, the distance between them decreases over time, allowing Tom to catch Jerry.
 * If Y <= X, the distance remains constant or increases, so Tom will never catch Jerry.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Tom catches Jerry if his speed is strictly greater than Jerry's
        if (y > x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}