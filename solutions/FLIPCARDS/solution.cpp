#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N cards in total.
 * X cards are face-up.
 * (N - X) cards are face-down.
 * 
 * To make all cards face-up, we need to flip all (N - X) face-down cards.
 * To make all cards face-down, we need to flip all X face-up cards.
 * 
 * The minimum number of operations is the minimum of these two values:
 * min(X, N - X).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        // Calculate the two possibilities:
        // 1. Flip all face-up cards to make them all face-down (cost = x)
        // 2. Flip all face-down cards to make them all face-up (cost = n - x)
        int result = min(x, n - x);
        
        cout << result << "\n";
    }
    
    return 0;
}