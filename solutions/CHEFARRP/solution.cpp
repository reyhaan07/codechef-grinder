#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Constraints: N <= 50, T <= 50.
 * The product of all elements is at most 10^9.
 * Since N is very small (50), an O(N^2) approach is perfectly efficient.
 * We can iterate over all possible subarrays [i, j] where 0 <= i <= j < N,
 * calculate the sum and product for each, and check if they are equal.
 * 
 * Data Types:
 * The sum can be up to 50 * 10^9, which fits in a 64-bit integer (long long).
 * The product is constrained to 10^9, which also fits in a 64-bit integer.
 */

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        long long current_sum = 0;
        long long current_prod = 1;
        for (int j = i; j < n; ++j) {
            current_sum += a[j];
            current_prod *= a[j];
            
            if (current_sum == current_prod) {
                count++;
            }
            
            // Optimization: If product exceeds the maximum possible sum 
            // (which is N * max(Ai) or simply the constraint given), 
            // we could break, but given N=50, O(N^2) is already optimal.
            // The constraint A1 * ... * An <= 10^9 ensures no overflow for long long.
        }
    }
    cout << count << "\n";
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