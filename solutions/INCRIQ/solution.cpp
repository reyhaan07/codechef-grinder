#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's current IQ is X.
 * After learning a musical instrument, Chef's IQ becomes X + 7.
 * Einstein's IQ is 170.
 * We need to check if (X + 7) > 170.
 * 
 * Constraints: 100 <= X <= 169.
 * Since X is at most 169, X + 7 is at most 176.
 * The values fit well within a standard 32-bit integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    // The problem description implies a single input X per run based on the format,
    // but standard competitive programming practice handles potential input streams.
    if (cin >> X) {
        if (X + 7 > 170) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}