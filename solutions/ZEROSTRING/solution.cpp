#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to make all characters in the string '0'.
 * Let 'ones' be the count of '1's in the string.
 * Let 'zeros' be the count of '0's in the string.
 * N = ones + zeros.
 * 
 * Strategy:
 * 1. We can delete all '1's. This takes 'ones' operations.
 * 2. We can flip the string and then delete the remaining '1's.
 *    If we flip, the string becomes (zeros '1's and ones '0's).
 *    Then we need to delete the new '1's (which were originally '0's).
 *    Total operations = 1 (flip) + zeros.
 * 
 * Comparing these two strategies:
 * - Option A: Delete all '1's -> cost = ones
 * - Option B: Flip + Delete all '0's -> cost = 1 + zeros
 * 
 * However, we can also combine these. If we have a string, we can delete some characters
 * and then flip, or flip then delete.
 * Actually, the minimum operations will be min(ones, zeros + 1).
 * Why?
 * - If we just delete all '1's, cost is 'ones'.
 * - If we flip first, we have 'zeros' ones, then we delete them, cost is 'zeros + 1'.
 * - Can we do better? If we delete some '1's first, say we delete 'k' ones, 
 *   the cost is k + min(ones - k, zeros + 1).
 *   This simplifies to min(ones, k + zeros + 1). Since k >= 0, this is always >= min(ones, zeros + 1).
 * 
 * Therefore, the answer is min(ones, zeros + 1).
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0;
    int zeros = 0;
    for (char c : s) {
        if (c == '1') ones++;
        else zeros++;
    }

    // The minimum operations is either deleting all ones, 
    // or flipping the string (1 op) and deleting the resulting ones (which were zeros).
    int ans = min(ones, zeros + 1);
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}