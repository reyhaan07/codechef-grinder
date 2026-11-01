#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Tuzik has N coins and can choose between 1 and K people.
 * When he chooses 'i' people, the coins are divided equally, and the remainder
 * is N % i. Tuzik gets the remainder.
 * We need to find the maximum value of (N % i) for all 1 <= i <= K.
 * 
 * Mathematical Insight:
 * For a fixed N, we want to maximize N % i where 1 <= i <= K.
 * If K >= N, then choosing i = N results in N % N = 0.
 * However, choosing i = N+1 is not possible, but choosing i such that 
 * i > N/2 allows for remainders. Specifically, for any i > N/2, 
 * N % i = N - i. To maximize N - i, we need the smallest i in the range 
 * (N/2, K].
 * 
 * Actually, the simplest approach is to iterate through all possible values of i 
 * from 1 to K and keep track of the maximum remainder. Given the constraints 
 * N, K <= 10^5 and T <= 50, an O(T * K) solution is well within the 1s time limit.
 */

void solve() {
    long long N, K;
    if (!(cin >> N >> K)) return;

    long long max_remainder = 0;
    
    // We iterate through all possible number of people from 1 to K.
    // The remainder Tuzik gets is N % i.
    for (long long i = 1; i <= K; ++i) {
        long long current_remainder = N % i;
        if (current_remainder > max_remainder) {
            max_remainder = current_remainder;
        }
    }
    
    cout << max_remainder << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}