#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: TCS Examination
 * The logic follows a hierarchical comparison:
 * 1. Total score
 * 2. DSA score
 * 3. TOC score
 * If all are equal, it's a Tie.
 */

void solve() {
    int dsaD, tocD, dmD;
    int dsaS, tocS, dmS;

    cin >> dsaD >> tocD >> dmD;
    cin >> dsaS >> tocS >> dmS;

    int totalD = dsaD + tocD + dmD;
    int totalS = dsaS + tocS + dmS;

    if (totalD > totalS) {
        cout << "Dragon" << "\n";
    } else if (totalS > totalD) {
        cout << "Sloth" << "\n";
    } else {
        // Total scores are tied, check DSA
        if (dsaD > dsaS) {
            cout << "Dragon" << "\n";
        } else if (dsaS > dsaD) {
            cout << "Sloth" << "\n";
        } else {
            // DSA scores are tied, check TOC
            if (tocD > tocS) {
                cout << "Dragon" << "\n";
            } else if (tocS > tocD) {
                cout << "Sloth" << "\n";
            } else {
                // Everything is tied
                cout << "Tie" << "\n";
            }
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}