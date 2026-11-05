#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a binary string S with N characters.
 * Let c0 be the count of '0's and c1 be the count of '1's.
 * We want to rearrange S to minimize the cost: (count of "01") * X + (count of "10") * Y.
 * 
 * If we group all 0s together and all 1s together, we can have at most one transition 
 * between 0s and 1s.
 * - If we arrange as "00...011...1", we have one "01" and zero "10"s. Cost = X.
 * - If we arrange as "11...100...0", we have one "10" and zero "01"s. Cost = Y.
 * - If there are no 0s or no 1s, the cost is 0.
 * 
 * Since we can rearrange the string, we can always achieve a configuration where 
 * there is at most one transition (either 01 or 10).
 * Thus, the minimum cost is:
 * 1. If c0 == 0 or c1 == 0: Cost = 0.
 * 2. Otherwise: Cost = min(X, Y).
 */

void solve() {
    int N, X, Y;
    cin >> N >> X >> Y;
    string S;
    cin >> S;

    int c0 = 0, c1 = 0;
    for (char c : S) {
        if (c == '0') c0++;
        else c1++;
    }

    if (c0 == 0 || c1 == 0) {
        cout << 0 << "\n";
    } else {
        cout << min(X, Y) << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}