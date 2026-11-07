#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The distance of a point (x, y) from the origin (0, 0) is given by the formula:
 * Distance = sqrt(x^2 + y^2)
 * To compare the distances of Alex (X1, Y1) and Bob (X2, Y2), we compare:
 * sqrt(X1^2 + Y1^2) vs sqrt(X2^2 + Y2^2)
 * Since both sides are non-negative, we can compare the squares to avoid floating point issues:
 * D1^2 = X1^2 + Y1^2
 * D2^2 = X2^2 + Y2^2
 * 
 * Constraints:
 * -1000 <= X, Y <= 1000
 * X^2 + Y^2 will be at most 1000^2 + 1000^2 = 2,000,000.
 * This fits comfortably within a standard 32-bit signed integer, but using 
 * long long is safe practice in competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        // Calculate squared distances
        long long dist1_sq = (x1 * x1) + (y1 * y1);
        long long dist2_sq = (x2 * x2) + (y2 * y2);
        
        // Compare and output result
        if (dist1_sq > dist2_sq) {
            cout << "ALEX" << "\n";
        } else if (dist2_sq > dist1_sq) {
            cout << "BOB" << "\n";
        } else {
            cout << "EQUAL" << "\n";
        }
    }
    
    return 0;
}