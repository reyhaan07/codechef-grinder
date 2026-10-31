#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * There are 101 citizens. A party wins if they receive strictly more than 50 votes.
 * Since the total number of votes is 101, at most one party can have > 50 votes.
 * We simply check each party's vote count against the condition > 50.
 * If none satisfy the condition, output "NOTA".
 */

void solve() {
    int xa, xb, xc;
    if (!(cin >> xa >> xb >> xc)) return;

    if (xa > 50) {
        cout << "A" << "\n";
    } else if (xb > 50) {
        cout << "B" << "\n";
    } else if (xc > 50) {
        cout << "C" << "\n";
    } else {
        cout << "NOTA" << "\n";
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