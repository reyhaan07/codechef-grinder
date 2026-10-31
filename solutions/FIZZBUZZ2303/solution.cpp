#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N players to choose from.
 * He needs to pick 1 captain and 1 vice-captain from these N players.
 * 
 * 1. The number of ways to choose the captain is N.
 * 2. After choosing the captain, the number of ways to choose the vice-captain 
 *    from the remaining (N-1) players is (N-1).
 * 
 * Total combinations = N * (N - 1).
 * 
 * Constraints:
 * 2 <= N <= 11
 * T <= 10
 * The result will fit in a standard integer, but using long long is safe practice.
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
        
        // Calculate permutations P(n, 2) = n * (n - 1)
        long long result = n * (n - 1);
        
        cout << result << "\n";
    }

    return 0;
}