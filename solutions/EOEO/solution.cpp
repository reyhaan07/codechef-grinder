#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let TS = 2^k * m, where m is odd.
 * The game proceeds by dividing both TS and JS by 2 as long as both are even.
 * This is equivalent to removing all factors of 2 from both numbers.
 * Let TS' = TS / 2^k = m (which is odd).
 * Let JS = 2^p * n, where n is odd.
 * 
 * The game ends when:
 * 1. Both are odd: TS' and n are both odd. Since TS' is odd, this happens if n = TS'.
 * 2. TS is even and JS is odd: This cannot happen if we reduce both by 2^k.
 * 3. TS is odd and JS is even: This happens if after reduction, the remaining JS is even.
 * 
 * Specifically, after dividing both by 2^min(k, p):
 * - If p < k: TS becomes 2^(k-p) * m (even), JS becomes n (odd). Tom wins.
 * - If p == k: TS becomes m (odd), JS becomes n (odd). Tie if n == m.
 * - If p > k: TS becomes m (odd), JS becomes 2^(p-k) * n (even). Jerry wins.
 * 
 * So, Jerry wins if and only if JS has more factors of 2 than TS.
 * Let TS = 2^k * m. We need JS = 2^p * n such that p > k and 1 <= JS <= TS.
 * JS = 2^p * n <= 2^k * m.
 * Since p > k, let p = k + x where x >= 1.
 * JS = 2^(k+x) * n <= 2^k * m
 * 2^x * n <= m
 * Since n >= 1, we need 2^x <= m.
 * The number of such JS values is the number of even integers JS <= TS 
 * such that JS / (2^(k+1)) is an odd integer.
 * Actually, it's simpler: Jerry wins if JS is a multiple of 2^(k+1).
 * The values of JS are 2^(k+1), 2 * 2^(k+1), 3 * 2^(k+1), ...
 * The largest multiple is floor(TS / 2^(k+1)) * 2^(k+1).
 * The count is simply floor(TS / 2^(k+1)).
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long ts;
        cin >> ts;

        // Find k such that ts = 2^k * m
        long long temp_ts = ts;
        long long k = 0;
        while (temp_ts % 2 == 0) {
            temp_ts /= 2;
            k++;
        }

        // Jerry wins if JS has more factors of 2 than TS.
        // JS must be a multiple of 2^(k+1).
        // Count of multiples of 2^(k+1) <= TS is floor(TS / 2^(k+1)).
        long long divisor = 1LL << (k + 1);
        cout << ts / divisor << "\n";
    }

    return 0;
}