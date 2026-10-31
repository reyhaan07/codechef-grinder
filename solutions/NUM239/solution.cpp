#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A number is "pretty" if its last digit is 2, 3, or 9.
 * We need to count how many such numbers exist in the range [L, R].
 * 
 * Approach:
 * Let f(N) be the count of pretty numbers in the range [1, N].
 * The answer for [L, R] is f(R) - f(L - 1).
 * 
 * In every block of 10 numbers (e.g., 1-10, 11-20), there are exactly 3 pretty numbers:
 * the ones ending in 2, 3, and 9.
 * 
 * For a number N:
 * 1. Full blocks of 10: (N / 10) * 3
 * 2. Remaining part: Check digits from (N / 10) * 10 + 1 to N.
 */

long long countPretty(long long n) {
    if (n < 0) return 0;
    if (n == 0) return 0;
    
    long long count = (n / 10) * 3;
    int remainder = n % 10;
    
    for (int i = 1; i <= remainder; ++i) {
        if (i == 2 || i == 3 || i == 9) {
            count++;
        }
    }
    return count;
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long L, R;
        cin >> L >> R;
        
        // The number of pretty numbers in [L, R] is f(R) - f(L-1)
        cout << countPretty(R) - countPretty(L - 1) << "\n";
    }
    
    return 0;
}