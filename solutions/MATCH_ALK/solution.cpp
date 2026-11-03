#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Man of the Match
 * Approach:
 * For each player, calculate points = runs + (wickets * 20).
 * Keep track of the maximum points found so far and the index of the player
 * who achieved those points. Since the problem guarantees a unique winner,
 * we simply iterate through all 22 players for each test case.
 * 
 * Time Complexity: O(T * 22) which is O(T), well within the 1s limit for T=1000.
 * Space Complexity: O(1) as we only store a few variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int max_points = -1;
        int winner_index = -1;

        for (int i = 1; i <= 22; ++i) {
            int runs, wickets;
            cin >> runs >> wickets;

            // Calculate points for the current player
            int current_points = runs + (wickets * 20);

            // Update winner if current player has more points
            if (current_points > max_points) {
                max_points = current_points;
                winner_index = i;
            }
        }

        // Output the index of the Man of the Match
        cout << winner_index << "\n";
    }

    return 0;
}