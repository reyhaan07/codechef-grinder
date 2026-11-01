#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice and Bob roll a die (1-6).
 * Sum S = A + B.
 * Range of S is [2, 12].
 * Alice wins if S is prime.
 * Prime numbers in range [2, 12] are: 2, 3, 5, 7, 11.
 * Bob wins otherwise (S = 4, 6, 8, 9, 10, 12).
 */

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        
        if (is_prime(sum)) {
            cout << "Alice" << "\n";
        } else {
            cout << "Bob" << "\n";
        }
    }
    return 0;
}