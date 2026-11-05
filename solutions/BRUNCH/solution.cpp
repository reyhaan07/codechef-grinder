#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X plates total.
 * Each neighbour takes Y plates.
 * There are 20 neighbours in total.
 * We need to find the maximum number of neighbours Chef can feed completely.
 * 
 * Let N be the number of neighbours fed.
 * Each neighbour consumes Y plates.
 * Total plates consumed = N * Y.
 * Constraint 1: N * Y <= X (Chef only has X plates).
 * Constraint 2: N <= 20 (There are only 20 neighbours).
 * 
 * Therefore, N = min(20, X / Y).
 * 
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
        long long x, y;
        cin >> x >> y;

        // Calculate how many neighbours can be fed based on plates available
        long long can_feed_by_plates = x / y;

        // The total number of neighbours is capped at 20
        long long result = min(20LL, can_feed_by_plates);

        cout << result << "\n";
    }

    return 0;
}