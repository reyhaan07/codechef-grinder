#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The array contains only 1s and 2s.
 * Let the number of 2s in the array be 'count2'.
 * The product of the array elements is 1^(N - count2) * 2^(count2) = 2^(count2).
 * We need to check if 2^(count2) = k^8 for some integer k.
 * Since 2 is a prime number, k must be of the form 2^m.
 * So, 2^(count2) = (2^m)^8 = 2^(8m).
 * This implies that count2 must be a multiple of 8.
 * 
 * Edge case: If count2 = 0, the product is 1. 1 = 1^8, which is valid.
 * 0 is a multiple of 8 (0 = 8 * 0).
 * Thus, the condition is simply: count2 % 8 == 0.
 */

void solve() {
    int n;
    cin >> n;
    int count2 = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 2) {
            count2++;
        }
    }

    if (count2 % 8 == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}