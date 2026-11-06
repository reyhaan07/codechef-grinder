#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Pep Bidding
 * Strategy:
 * 1. Calculate the sum of attack powers and defense powers for both Team A and Team P.
 * 2. Use 'long long' to prevent any potential overflow, although with N=2000 and max value 1000,
 *    the max sum is 2,000,000 which fits in a standard 32-bit int.
 * 3. Compare the sums based on the problem's strict inequality condition.
 * 4. Output "A", "P", or "DRAW" accordingly.
 */

void solve() {
    int N;
    cin >> N;

    long long attA_sum = 0, defA_sum = 0;
    long long attP_sum = 0, defP_sum = 0;

    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        attA_sum += val;
    }
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        defA_sum += val;
    }
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        attP_sum += val;
    }
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        defP_sum += val;
    }

    bool A_dominates = (attA_sum > attP_sum) && (defA_sum > defP_sum);
    bool P_dominates = (attP_sum > attA_sum) && (defP_sum > defA_sum);

    if (A_dominates) {
        cout << "A" << "\n";
    } else if (P_dominates) {
        cout << "P" << "\n";
    } else {
        cout << "DRAW" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}