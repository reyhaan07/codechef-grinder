#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The operation described is:
 * 1. If X > Y, swap X and Y.
 * 2. Otherwise, set X = Y - X and Y = X.
 * 
 * Let's trace the operation:
 * Start: (X, Y)
 * If X > Y: (Y, X)
 * Then: X_new = Y - X, Y_new = X
 * 
 * This is exactly the Euclidean algorithm for finding the Greatest Common Divisor (GCD).
 * The Euclidean algorithm states:
 * gcd(X, Y) = gcd(Y, X)
 * gcd(X, Y) = gcd(X, Y - X)
 * 
 * The process continues until X becomes 0. At that point, Y holds the GCD of the original X and Y.
 * 
 * Constraints:
 * X, Y <= 10^9, T <= 10^5.
 * The Euclidean algorithm has a logarithmic time complexity O(log(min(X, Y))), 
 * which is well within the time limit for 10^5 test cases.
 */

void solve() {
    long long X, Y;
    if (!(cin >> X >> Y)) return;
    
    // The problem asks for the final value of Y when X becomes 0.
    // This is equivalent to finding the GCD of X and Y.
    cout << std::gcd(X, Y) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}