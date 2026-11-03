#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N bottles, each with capacity X.
 * Total water available is S = sum(A_i).
 * Since each bottle can hold at most X liters, the minimum number of bottles 
 * required to hold S liters is ceil(S / X).
 * 
 * Mathematically, ceil(S / X) can be calculated using integer division as:
 * (S + X - 1) / X.
 * 
 * Constraints:
 * N <= 100, X <= 1000, A_i <= X.
 * Total water S <= 100 * 1000 = 100,000.
 * This fits comfortably within a standard 32-bit integer, but we use 
 * long long to be safe and follow best practices.
 */

void solve() {
    int N;
    long long X;
    cin >> N >> X;
    
    long long total_water = 0;
    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        total_water += a;
    }
    
    // The minimum number of bottles required is ceil(total_water / X)
    // Using integer arithmetic: (total_water + X - 1) / X
    long long min_bottles = (total_water + X - 1) / X;
    
    cout << min_bottles << "\n";
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