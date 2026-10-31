#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A right-angled isosceles triangle with base B has a height of B.
 * We want to fit 2x2 squares.
 * Let the base be B. The first row of squares (at the bottom) can fit 
 * floor((B-2)/2) squares.
 * The remaining triangle above these squares is a smaller right-angled 
 * isosceles triangle with base (B-2).
 * 
 * Let f(B) be the number of squares.
 * f(B) = floor((B-2)/2) + f(B-2)
 * If B < 4, f(B) = 0.
 * 
 * Let n = floor(B/2).
 * If B=4, n=2, f(4) = 1.
 * If B=6, n=3, f(6) = 2 + 1 = 3.
 * If B=8, n=4, f(8) = 3 + 2 + 1 = 6.
 * The pattern is the sum of integers from 1 to (n-1), which is (n-1)*n / 2.
 */

void solve() {
    long long B;
    cin >> B;
    
    // The number of 2x2 squares that can fit is based on the number of 
    // full 2-unit segments available after accounting for the triangle's slope.
    // The effective base for the squares decreases by 2 for each layer.
    long long n = B / 2;
    if (n <= 1) {
        cout << 0 << "\n";
    } else {
        // The number of squares is the sum of (n-1) + (n-2) + ... + 1
        long long count = (n - 1) * n / 2;
        cout << count << "\n";
    }
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