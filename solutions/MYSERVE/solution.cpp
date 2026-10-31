#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice serves for points 0, 1 (first 2 serves)
 * Bob serves for points 2, 3 (next 2 serves)
 * Alice serves for points 4, 5 (next 2 serves)
 * Bob serves for points 6, 7 (next 2 serves)
 * 
 * The total number of points played is S = P + Q.
 * Since service changes every 2 points, we can determine the server by looking at (S / 2).
 * If (S / 2) is even (0, 2, 4...), it is Alice's turn.
 * If (S / 2) is odd (1, 3, 5...), it is Bob's turn.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long p, q;
        cin >> p >> q;
        
        long long total_points = p + q;
        // Determine the block of 2 serves
        long long block = total_points / 2;
        
        // If block is even, it's Alice's turn (0-1, 4-5, 8-9...)
        // If block is odd, it's Bob's turn (2-3, 6-7, 10-11...)
        if (block % 2 == 0) {
            cout << "Alice" << "\n";
        } else {
            cout << "Bob" << "\n";
        }
    }
    
    return 0;
}