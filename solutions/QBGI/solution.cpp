#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to iterate through the string S and maintain the count of boys (B) and girls (G).
 * Let 'b' be the number of boys and 'g' be the number of girls currently inside.
 * The condition for closing the gate is: b > 2 * g.
 * We process the string character by character. If the condition is met, we stop
 * and the number of people who entered is the current index (1-based).
 * If we finish the string without the condition being met, all N people entered.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int boys = 0;
    int girls = 0;
    int allowed = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'B') {
            boys++;
        } else {
            girls++;
        }

        // Check if the current state violates the condition
        if (boys > 2 * girls) {
            // The gate closes immediately after this person enters.
            // So this person is the last one allowed.
            allowed = i + 1;
            cout << allowed << "\n";
            return;
        }
    }

    // If we reach here, everyone was allowed to enter.
    cout << N << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}