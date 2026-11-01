#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each round consists of 4 games.
 * Points: Win = 1, Draw = 0.5, Loss = 0.
 * Let X, Y, Z be the number of wins, draws, and losses already played.
 * Total games played = X + Y + Z.
 * Remaining games = 4 - (X + Y + Z).
 * 
 * Current points for our team: P_us = X * 1.0 + Y * 0.5
 * Current points for opponent: P_opp = Z * 1.0 + Y * 0.5
 * 
 * To maximize our chances of winning, we assume we win all remaining games.
 * If we win all remaining games, our final points will be:
 * P_us_final = P_us + (4 - (X + Y + Z))
 * P_opp_final = P_opp (opponent gets 0 points for these games)
 * 
 * We win if P_us_final > P_opp_final.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y, Z;
    if (!(cin >> X >> Y >> Z)) return 0;

    // Calculate current points (using double to handle 0.5)
    double current_us = (double)X + (double)Y * 0.5;
    double current_opp = (double)Z + (double)Y * 0.5;

    // Number of games remaining
    int remaining = 4 - (X + Y + Z);

    // If we win all remaining games, our points increase by 'remaining'
    double final_us = current_us + (double)remaining;
    double final_opp = current_opp;

    // Check if strictly greater
    if (final_us > final_opp) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}