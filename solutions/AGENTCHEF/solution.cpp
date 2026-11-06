#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each insurance costs X dollars.
 * Commission per insurance = 20% of X = 0.2 * X = X / 5.
 * We need to find the minimum number of insurances (n) such that:
 * n * (X / 5) >= 100
 * n * X >= 500
 * n >= 500 / X
 * 
 * Since n must be an integer, n = ceil(500 / X).
 * Using integer arithmetic, ceil(a / b) can be calculated as (a + b - 1) / b.
 * So, n = (500 + X - 1) / X.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x;
        cin >> x;
        
        // Using the formula derived: n = ceil(500 / x)
        // For integer division, ceil(a/b) = (a + b - 1) / b
        long long ans = (500 + x - 1) / x;
        
        cout << ans << "\n";
    }
    
    return 0;
}