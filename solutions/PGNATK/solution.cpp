#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to complete N minutes of work.
 * Pigeons arrive at minutes K, 2K, 3K, ...
 * Let T be the total time elapsed.
 * The number of minutes Chef has worked by time T is (T - number of pigeon interruptions).
 * The number of pigeon interruptions by time T is floor(T / K).
 * So, we need to find the smallest T such that:
 * T - floor(T / K) = N
 * 
 * Given the constraints N, K <= 100, we can simulate this or solve it mathematically.
 * Since N is small, a simple simulation or a direct calculation works.
 * 
 * Simulation approach:
 * Iterate through minutes t = 1, 2, 3...
 * If t is not a multiple of K, increment work_done.
 * If work_done == N, return t.
 */

void solve() {
    int N, K;
    cin >> N >> K;
    
    int work_done = 0;
    int t = 0;
    while (work_done < N) {
        t++;
        if (t % K != 0) {
            work_done++;
        }
    }
    cout << t << "\n";
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