#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Shopping Change
 * Chef pays 100 rupees for items worth X.
 * The change received is 100 - X.
 * Constraints: 1 <= X <= 100.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // The change is simply 100 - X.
        // Since 1 <= X <= 100, the result will always be between 0 and 99.
        // No overflow issues with standard int.
        int change = 100 - x;
        
        cout << change << "\n";
    }

    return 0;
}