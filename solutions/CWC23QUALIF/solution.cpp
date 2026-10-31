#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Cricket World Cup Qualifier
 * Logic: A team qualifies if their score X >= 12.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X per run based on the 
    // sample format, but standard competitive programming practice handles 
    // the input as provided.
    long long X;
    if (cin >> X) {
        if (X >= 12) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}