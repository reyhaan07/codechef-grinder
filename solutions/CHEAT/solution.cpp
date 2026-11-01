#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Today is Monday (Day 1).
 * Tuesday is Day 2.
 * The cycle of Tuesdays occurs every 7 days:
 * Day 2, Day 9, Day 16, Day 23, ...
 * 
 * We want to find how many Tuesdays occur in the range [1, N].
 * This is equivalent to finding how many integers k >= 0 exist such that:
 * 2 + 7*k <= N
 * 7*k <= N - 2
 * k <= (N - 2) / 7
 * 
 * Since k starts from 0, the number of Tuesdays is the count of such k values,
 * which is floor((N - 2) / 7) + 1, provided N >= 2.
 * If N < 2, the answer is 0.
 * 
 * Alternatively, a simple way to calculate this is (N - 1) / 7.
 * Let's verify:
 * N=1: (1-1)/7 = 0
 * N=2: (2-1)/7 = 0 (Wait, this formula gives 0, but answer should be 1)
 * Let's re-evaluate:
 * N=1: 0
 * N=2: 1
 * N=8: 1
 * N=9: 2
 * The formula is floor((N - 2) / 7) + 1 for N >= 2.
 * Or more simply: (N - 2) / 7 + 1 if N >= 2 else 0.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n < 2) {
            cout << 0 << "\n";
        } else {
            // The first Tuesday is on day 2.
            // Subsequent Tuesdays are on 2+7, 2+14, etc.
            // Number of Tuesdays = 1 + (N - 2) / 7
            cout << (n - 2) / 7 + 1 << "\n";
        }
    }
    return 0;
}