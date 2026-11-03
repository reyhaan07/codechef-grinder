#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N apples and M oranges. We need to find the maximum number of contestants (let's call it K)
 * such that N is divisible by K and M is divisible by K.
 * 
 * Mathematically, this means K must be a common divisor of N and M.
 * To maximize K, we need to find the Greatest Common Divisor (GCD) of N and M.
 * 
 * Constraints:
 * N, M <= 10^9. The GCD of two numbers up to 10^9 fits in a standard 32-bit integer,
 * but using long long is safer and good practice in competitive programming.
 * Time complexity per test case: O(log(min(N, M))) using the Euclidean algorithm.
 * Total time complexity: O(T * log(min(N, M))), which is well within the 1s limit.
 */

void solve() {
    long long n, m;
    if (!(cin >> n >> m)) return;
    
    // The maximum number of contestants is the GCD of N and M.
    // std::gcd is available in <numeric> header since C++17.
    cout << std::gcd(n, m) << "\n";
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