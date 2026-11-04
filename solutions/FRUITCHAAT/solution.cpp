#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each fruit chaat requires 2 bananas and 1 apple.
 * Given X bananas and Y apples:
 * - The number of chaats possible based on bananas is floor(X / 2).
 * - The number of chaats possible based on apples is floor(Y / 1).
 * Since both ingredients are required, the total number of chaats is the 
 * minimum of these two values: min(X / 2, Y).
 * 
 * Constraints:
 * 0 <= X, Y <= 100.
 * The result will fit in a standard integer.
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
        
        // Calculate max chaats based on bananas
        int chaats_by_bananas = x / 2;
        
        // Calculate max chaats based on apples
        int chaats_by_apples = y;
        
        // The limiting factor is the minimum of the two
        int result = min(chaats_by_bananas, chaats_by_apples);
        
        cout << result << "\n";
    }
    
    return 0;
}