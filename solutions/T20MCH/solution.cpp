#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Team A scored R runs.
 * Team B has played O overs and scored C runs.
 * Remaining overs = 20 - O.
 * Each over has 6 balls, and each ball can score a maximum of 6 runs.
 * Maximum runs per over = 6 * 6 = 36.
 * Maximum runs possible in remaining overs = (20 - O) * 36.
 * Total maximum score for Team B = C + (20 - O) * 36.
 * Team B wins if Total maximum score > R.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int R, O, C;
    if (!(cin >> R >> O >> C)) return 0;

    // Calculate remaining overs
    int remaining_overs = 20 - O;
    
    // Calculate maximum possible runs in remaining overs
    // Each over has 6 balls, max 6 runs per ball = 36 runs per over
    int max_additional_runs = remaining_overs * 36;
    
    // Calculate total potential score
    int total_potential_score = C + max_additional_runs;
    
    // Check if it's possible to strictly exceed R
    if (total_potential_score > R) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}