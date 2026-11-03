#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The time penalty for a participant is defined as the maximum time instant 
 * at which they solved both problems (since they must have solved both to 
 * finish the contest).
 * Specifically, if P solves A at P_A and B at P_B, the time they finish 
 * both is max(P_A, P_B).
 * We compare max(P_A, P_B) and max(Q_A, Q_B).
 * - If max(P_A, P_B) < max(Q_A, Q_B), P wins.
 * - If max(P_A, P_B) > max(Q_A, Q_B), Q wins.
 * - Otherwise, it is a TIE.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int pa, pb, qa, qb;
        cin >> pa >> pb >> qa >> qb;

        // Calculate time penalty for P and Q
        int penalty_p = max(pa, pb);
        int penalty_q = max(qa, qb);

        // Compare penalties
        if (penalty_p < penalty_q) {
            cout << "P" << "\n";
        } else if (penalty_q < penalty_p) {
            cout << "Q" << "\n";
        } else {
            cout << "TIE" << "\n";
        }
    }

    return 0;
}