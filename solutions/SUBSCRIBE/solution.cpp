#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The platform allows a maximum of 30 minutes without a subscription.
 * If the required duration X is greater than 30, Chef needs a subscription.
 * Otherwise, he does not.
 * 
 * Logic:
 * If X > 30, print "YES".
 * Else, print "NO".
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a single integer variable.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Check if the duration exceeds the 30-minute limit
        if (x > 30) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}