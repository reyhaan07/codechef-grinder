#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a stick of length X. We want to break it into two positive integers Y and Z
 * such that Y + Z = X. Each break increases the number of sticks by 1.
 * If we start with 1 stick of length X and break it until all sticks have length 1,
 * we will end up with X sticks of length 1.
 * 
 * The number of breaks required to turn a stick of length X into X sticks of length 1
 * is exactly X - 1.
 * 
 * Example:
 * Length 3:
 * 3 -> 2 + 1 (1 break)
 * 2 -> 1 + 1 (1 break)
 * Total = 2 breaks. (3 - 1 = 2)
 * 
 * Length 1:
 * Cannot be broken into positive integers (1 = Y + Z, Y,Z >= 1 implies Y+Z >= 2).
 * Total = 0 breaks. (1 - 1 = 0)
 * 
 * Thus, for each stick of length A_i, the maximum number of breaks is A_i - 1.
 * Total breaks = Sum(A_i - 1) for all i where A_i > 0.
 */

void solve() {
    int N;
    cin >> N;
    long long total_breaks = 0;
    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        if (A > 1) {
            total_breaks += (A - 1);
        }
    }
    cout << total_breaks << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}