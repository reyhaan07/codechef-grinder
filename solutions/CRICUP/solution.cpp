#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks us to determine if the absolute difference between two skill levels X and Y
 * is less than or equal to a given threshold D.
 * 
 * Logic:
 * Calculate |X - Y|.
 * If |X - Y| <= D, output "YES".
 * Otherwise, output "NO".
 * 
 * Complexity:
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1), as we only use a few integer variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, d;
        cin >> x >> y >> d;
        
        // Calculate absolute difference
        long long diff = abs(x - y);
        
        // Check condition
        if (diff <= d) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}