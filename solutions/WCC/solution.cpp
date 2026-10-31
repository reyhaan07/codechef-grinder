#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: World Chess Championship
 * Logic:
 * - Carlsen's points: 2 for 'C', 1 for 'D', 0 for 'N'.
 * - Chef's points: 2 for 'N', 1 for 'D', 0 for 'C'.
 * - Total games = 14.
 * - If Carlsen's points > Chef's points: Carlsen gets 60 * X.
 * - If Carlsen's points <= Chef's points: Carlsen is champion (tie-break rule), gets 55 * X.
 * 
 * Note: The problem states "If the total points are tied, then the defending champion Carlsen is declared the winner."
 * This implies if Carlsen's points >= Chef's points, he wins.
 * If Carlsen > Chef, he gets 60*X.
 * If Carlsen == Chef, he gets 55*X.
 * If Carlsen < Chef, Chef wins, Carlsen gets 40*X.
 */

void solve() {
    long long X;
    cin >> X;
    string S;
    cin >> S;

    long long carlsen_points = 0;
    long long chef_points = 0;

    for (char c : S) {
        if (c == 'C') {
            carlsen_points += 2;
        } else if (c == 'N') {
            chef_points += 2;
        } else {
            carlsen_points += 1;
            chef_points += 1;
        }
    }

    if (carlsen_points > chef_points) {
        cout << 60 * X << "\n";
    } else if (carlsen_points == chef_points) {
        cout << 55 * X << "\n";
    } else {
        cout << 40 * X << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}