#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to distribute N chocolates into three jars (a, b, c) such that:
 * 1. a + b + c = N
 * 2. At least one jar has an odd number of chocolates.
 * 3. Exactly two jars have the same number of chocolates.
 * 4. a, b, c >= 1.
 * 
 * Strategy:
 * Let the two equal jars have x chocolates each.
 * Then the third jar has (N - 2x) chocolates.
 * We need N - 2x >= 1, so 2x <= N - 1, or x <= (N - 1) / 2.
 * 
 * Case 1: N is even.
 * Let x = 1. Then the jars are (1, 1, N-2).
 * - Two jars are equal (1, 1).
 * - Condition: At least one odd. 1 is odd, so this is satisfied.
 * - Condition: Exactly two equal. If N-2 = 1, then N=3 (but N >= 4).
 *   If N-2 = 1, then N=3. Since N >= 4, N-2 is at least 2.
 *   So (1, 1, N-2) works for all even N >= 4.
 * 
 * Case 2: N is odd.
 * Let x = (N-1)/2. Then the jars are ((N-1)/2, (N-1)/2, 1).
 * - Two jars are equal.
 * - Condition: At least one odd. 1 is odd, so this is satisfied.
 * - Condition: Exactly two equal. If (N-1)/2 = 1, then N=3 (but N >= 4).
 *   If (N-1)/2 = 1, N=3. Since N >= 4, (N-1)/2 is at least 2.
 *   So ((N-1)/2, (N-1)/2, 1) works for all odd N >= 5.
 * 
 * Summary:
 * If N is even: 1, 1, N-2
 * If N is odd: (N-1)/2, (N-1)/2, 1
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            // Even case: 1, 1, N-2
            cout << 1 << " " << 1 << " " << (n - 2) << "\n";
        } else {
            // Odd case: (N-1)/2, (N-1)/2, 1
            long long x = (n - 1) / 2;
            cout << x << " " << x << " " << 1 << "\n";
        }
    }

    return 0;
}