#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let S = A[1] | A[2] | ... | A[N].
 * We need to find the minimum non-negative integer X such that (S | X) = Y.
 * 
 * Bitwise OR properties:
 * 1. If a bit is set in S but not in Y, it is impossible to reach Y because 
 *    the OR operation can only turn bits from 0 to 1, never 1 to 0.
 *    Condition: (S & ~Y) != 0. If this is true, output -1.
 * 2. If a bit is set in Y but not in S, X MUST have that bit set to 1.
 * 3. If a bit is not set in Y, X MUST have that bit set to 0.
 * 4. If a bit is set in both S and Y, X can have that bit as 0 or 1. 
 *    To minimize X, we choose 0.
 * 
 * Therefore, the minimum X is defined by bits that are in Y but not in S.
 * X = Y & (~S).
 * 
 * After calculating X, we must verify if (S | X) == Y.
 */

void solve() {
    int N;
    long long Y;
    cin >> N >> Y;
    
    long long S = 0;
    for (int i = 0; i < N; ++i) {
        long long val;
        cin >> val;
        S |= val;
    }
    
    // Check if S has any bits set that are not in Y
    if ((S | Y) != Y) {
        cout << -1 << "\n";
        return;
    }
    
    // The minimum X is the bits present in Y but missing in S
    long long X = (Y ^ S);
    
    // Final verification
    if ((S | X) == Y) {
        cout << X << "\n";
    } else {
        cout << -1 << "\n";
    }
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