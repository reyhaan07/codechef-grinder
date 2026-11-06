#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to reach exactly N kg using 1kg weights (cost 20) and 2kg weights (cost 30).
 * Let x be the number of 1kg weights and y be the number of 2kg weights.
 * We want to minimize 20x + 30y subject to x + 2y = N, where x, y >= 0.
 * 
 * From x + 2y = N, we get x = N - 2y.
 * Substituting into cost: 20(N - 2y) + 30y = 20N - 40y + 30y = 20N - 10y.
 * To minimize 20N - 10y, we need to maximize y.
 * Since x >= 0, N - 2y >= 0 => 2y <= N => y <= N/2.
 * To maximize y, we choose y = floor(N/2).
 * Then x = N - 2 * floor(N/2).
 * 
 * If N is even, y = N/2, x = 0. Cost = 30 * (N/2) = 15N.
 * If N is odd, y = (N-1)/2, x = 1. Cost = 30 * ((N-1)/2) + 20.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        
        // We want to maximize the number of 2kg weights (cost 30) 
        // because 30/2 = 15 per kg is cheaper than 20/1 = 20 per kg.
        long long y = n / 2;
        long long x = n % 2;
        
        long long min_cost = (x * 20) + (y * 30);
        cout << min_cost << "\n";
    }
    
    return 0;
}