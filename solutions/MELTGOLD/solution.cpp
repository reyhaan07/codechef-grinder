#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Initial temperature = Y
 * Melting point = X
 * After minute 1: Temp = Y + 1
 * After minute 2: Temp = Y + 1 + 2
 * After minute 3: Temp = Y + 1 + 2 + 3
 * After minute n: Temp = Y + (1 + 2 + ... + n)
 * 
 * The sum of the first n integers is given by n * (n + 1) / 2.
 * We need to find the smallest n such that:
 * Y + (n * (n + 1) / 2) >= X
 * n * (n + 1) / 2 >= X - Y
 * 
 * Since X and Y are up to 10^5, X - Y is at most 10^5.
 * A simple loop or binary search will work perfectly.
 * Given the constraints and the nature of the problem, a simple loop
 * is efficient enough (O(sqrt(X-Y)) per test case).
 */

void solve() {
    long long X, Y;
    cin >> X >> Y;
    
    long long diff = X - Y;
    long long current_sum = 0;
    int minutes = 0;
    
    // We increment minutes until the accumulated sum of 1+2+...+n >= X-Y
    while (current_sum < diff) {
        minutes++;
        current_sum += minutes;
    }
    
    cout << minutes << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}