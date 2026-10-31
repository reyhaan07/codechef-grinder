#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks if N chocolates can be divided equally between two people.
 * This is possible if and only if N is divisible by 2, i.e., N % 2 == 0.
 * 
 * Constraints:
 * 1 <= T <= 10
 * 1 <= N <= 10
 * 
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
        long long n;
        cin >> n;
        
        // Check if N is even
        if (n % 2 == 0) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}