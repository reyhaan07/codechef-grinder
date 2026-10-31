#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to track the cumulative scores of two players over N rounds.
 * At each round, we calculate the current cumulative score for both,
 * determine who is leading, and calculate the lead value.
 * We keep track of the maximum lead encountered throughout the game
 * and which player achieved it.
 * 
 * Complexity:
 * Time: O(N), where N is the number of rounds.
 * Space: O(1), as we only store cumulative sums and the max lead.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long cumulative1 = 0;
    long long cumulative2 = 0;
    long long max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; ++i) {
        int s1, s2;
        cin >> s1 >> s2;

        cumulative1 += s1;
        cumulative2 += s2;

        long long current_lead = 0;
        int current_leader = 0;

        if (cumulative1 > cumulative2) {
            current_lead = cumulative1 - cumulative2;
            current_leader = 1;
        } else {
            current_lead = cumulative2 - cumulative1;
            current_leader = 2;
        }

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead << "\n";

    return 0;
}