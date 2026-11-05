#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is at position X.
 * He needs to reach 50 in exactly one turn.
 * The dice have values {Y, Y+1, Y+2, Y+3, Y+4, Y+5}.
 * Let the two dice show values d1 and d2.
 * d1 can be any value in [Y, Y+5].
 * d2 can be any value in [Y, Y+5].
 * The sum S = d1 + d2.
 * The range of possible sums S is [Y+Y, (Y+5)+(Y+5)], which is [2Y, 2Y+10].
 * Chef wins if X + S = 50, which means S = 50 - X.
 * Therefore, we need to check if (50 - X) falls within the range [2Y, 2Y+10].
 */

void solve() {
    int X, Y;
    cin >> X >> Y;

    int target_sum = 50 - X;
    int min_sum = 2 * Y;
    int max_sum = 2 * Y + 10;

    if (target_sum >= min_sum && target_sum <= max_sum) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
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