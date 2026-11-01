#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to maximize the sum of squares: N_1^2 + N_2^2 + ... + N_T^2
 * subject to:
 * 1. 1 <= T <= maxT
 * 2. 1 <= N_i <= maxN
 * 3. Sum of N_i <= sumN
 * 
 * To maximize the sum of squares, we want the individual N_i values to be as large as possible.
 * Since the function f(x) = x^2 is convex, we should make as many N_i as possible equal to maxN.
 * 
 * Strategy:
 * 1. We can have at most maxT test cases.
 * 2. We want to fill as many test cases as possible with the maximum allowed value (maxN).
 * 3. Let k = sumN / maxN.
 * 4. If k < maxT, we can have k test cases with value maxN, and one remaining test case 
 *    with value (sumN % maxN). The total number of test cases used is k + 1 (if remainder > 0),
 *    which is <= maxT.
 * 5. If k >= maxT, we are limited by the number of test cases maxT. We should set all 
 *    maxT test cases to maxN. The remaining sum (sumN - maxT * maxN) cannot be used 
 *    because we cannot exceed maxT test cases and each N_i cannot exceed maxN.
 */

void solve() {
    long long maxT, maxN, sumN;
    cin >> maxT >> maxN >> sumN;

    long long total_iterations = 0;
    
    // Number of full maxN blocks we can fit
    long long full_blocks = sumN / maxN;
    
    if (full_blocks >= maxT) {
        // We are limited by the number of test cases
        total_iterations = maxT * (maxN * maxN);
    } else {
        // We use full_blocks of maxN, and one remainder block
        total_iterations = full_blocks * (maxN * maxN);
        long long remainder = sumN % maxN;
        total_iterations += (remainder * remainder);
    }
    
    cout << total_iterations << "\n";
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