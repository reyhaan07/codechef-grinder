#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef participates in two races: X and Y.
 * The rival participates in two races: A and B.
 * Chef wins a gold medal in a race if the rival is not participating in that race.
 * We need to count how many of {X, Y} are not in {A, B}.
 * 
 * Complexity:
 * Time: O(T) where T is the number of test cases.
 * Space: O(1) as we only use a few integer variables.
 */

void solve() {
    int X, Y, A, B;
    if (!(cin >> X >> Y >> A >> B)) return;

    int gold_medals = 0;

    // Check if Chef wins race X
    // Chef wins X if the rival is not in X (i.e., X != A and X != B)
    if (X != A && X != B) {
        gold_medals++;
    }

    // Check if Chef wins race Y
    // Chef wins Y if the rival is not in Y (i.e., Y != A and Y != B)
    if (Y != A && Y != B) {
        gold_medals++;
    }

    cout << gold_medals << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}