#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * There are N players. When player i is eliminated, A_i is added to the prize pool.
 * If we choose player k to be the winner, all other players (N-1 players) must be eliminated.
 * The prize pool will be the sum of A_i for all i except k.
 * Prize(k) = (Sum of all A_i) - A_k.
 * To maximize the prize, we need to minimize A_k.
 * Therefore, the maximum prize is (Sum of all A_i) - (Minimum value in A).
 * 
 * Constraints:
 * N <= 10^5, Sum of N <= 10^6.
 * A_i <= 10^4.
 * The total sum can be up to 10^5 * 10^4 = 10^9, which fits in a 32-bit signed integer,
 * but using long long is safer and good practice for competitive programming.
 */

void solve() {
    int n;
    cin >> n;
    
    long long sum = 0;
    int min_val = 20000; // Larger than max possible A_i (10^4)
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        if (a < min_val) {
            min_val = a;
        }
    }
    
    // The winner gets the sum of all A_i excluding the minimum A_i
    cout << (sum - min_val) << "\n";
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