#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have 2N total players, X of whom are rated.
 * We want to minimize the number of rated players paired with other rated players.
 * 
 * Let R = X (rated players)
 * Let U = 2N - X (unrated players)
 * 
 * We want to maximize the number of (Rated, Unrated) pairs.
 * Each (Rated, Unrated) pair uses 1 rated player and 1 unrated player.
 * The maximum number of such pairs is min(R, U).
 * 
 * After forming as many (Rated, Unrated) pairs as possible:
 * 1. If R <= U: All rated players can be paired with unrated players. 
 *    Number of rated players with rated opponents = 0.
 * 2. If R > U: We use all U unrated players to pair with U rated players.
 *    Remaining rated players = R - U.
 *    These remaining players must be paired with each other.
 *    Since each pair consists of 2 rated players, the number of rated players 
 *    with rated opponents is (R - U).
 * 
 * General formula: max(0, R - U)
 * Substituting U = 2N - X:
 * max(0, X - (2N - X)) = max(0, 2X - 2N)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        long long unrated = 2 * n - x;
        
        // If rated players are more than unrated, the excess must pair with each other.
        if (x > unrated) {
            cout << (x - unrated) << "\n";
        } else {
            // Otherwise, all rated players can be paired with unrated players.
            cout << 0 << "\n";
        }
    }
    
    return 0;
}