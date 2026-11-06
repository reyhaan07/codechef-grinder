#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Cricket Ranking
 * Approach:
 * We are given three statistics for two players A and B.
 * We compare them in each category (Runs, Wickets, Catches).
 * We maintain a counter for how many categories each player wins.
 * Since the problem guarantees that stats are never equal, we simply
 * increment the count for the player who has a higher value in each category.
 * Finally, compare the counts and output the winner.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few integer variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int r1, w1, c1;
        int r2, w2, c2;

        cin >> r1 >> w1 >> c1;
        cin >> r2 >> w2 >> c2;

        int countA = 0;
        int countB = 0;

        // Compare Runs
        if (r1 > r2) countA++;
        else countB++;

        // Compare Wickets
        if (w1 > w2) countA++;
        else countB++;

        // Compare Catches
        if (c1 > c2) countA++;
        else countB++;

        // Determine winner
        if (countA > countB) {
            cout << "A" << "\n";
        } else {
            cout << "B" << "\n";
        }
    }

    return 0;
}