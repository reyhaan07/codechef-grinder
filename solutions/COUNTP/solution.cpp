#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to partition array A into two non-empty subsequences S1 and S2 such that
 * sum(S1) * sum(S2) is odd.
 * 
 * For the product of two integers to be odd, both integers must be odd.
 * So, we need sum(S1) to be odd and sum(S2) to be odd.
 * 
 * Let the total sum of the array be S_total = sum(S1) + sum(S2).
 * If sum(S1) is odd and sum(S2) is odd, then S_total must be even (odd + odd = even).
 * 
 * Also, for sum(S1) to be odd, S1 must contain an odd number of odd elements.
 * For sum(S2) to be odd, S2 must contain an odd number of odd elements.
 * 
 * Let 'count_odd' be the number of odd elements in the array A.
 * If we partition the odd elements into S1 and S2, we need:
 * - Number of odd elements in S1 to be odd.
 * - Number of odd elements in S2 to be odd.
 * 
 * This implies that the total number of odd elements in the array must be the sum of 
 * two odd numbers, which is an even number.
 * So, if 'count_odd' is odd, it is impossible to have both sums odd.
 * If 'count_odd' is 0, the sum of any subsequence is even, so the product is even.
 * If 'count_odd' is even and count_odd >= 2:
 * We can put one odd element in S1 and the remaining (count_odd - 1) odd elements in S2.
 * Since (count_odd - 1) is odd, sum(S1) will be odd and sum(S2) will be odd.
 * The even elements can be distributed anywhere without changing the parity of the sums.
 * 
 * Conclusion:
 * The condition is satisfied if and only if the number of odd elements is even and at least 2.
 */

void solve() {
    int N;
    cin >> N;
    int count_odd = 0;
    for (int i = 0; i < N; ++i) {
        long long val;
        cin >> val;
        if (val % 2 != 0) {
            count_odd++;
        }
    }

    if (count_odd > 0 && count_odd % 2 == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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