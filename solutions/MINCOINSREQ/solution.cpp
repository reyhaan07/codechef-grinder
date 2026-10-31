#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has 1-rupee coins and 10-rupee notes.
 * To pay X rupees with the minimum number of 1-rupee coins, 
 * Chef should use as many 10-rupee notes as possible.
 * 
 * The number of 10-rupee notes used will be floor(X / 10).
 * The remaining amount that must be paid using 1-rupee coins is X % 10.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
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

        // The number of 1-rupee coins needed is simply the remainder when X is divided by 10.
        // Any amount divisible by 10 can be covered by 10-rupee notes.
        long long coins_needed = x % 10;

        cout << coins_needed << "\n";
    }

    return 0;
}