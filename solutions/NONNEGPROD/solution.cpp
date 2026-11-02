#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The product of an array is non-negative if:
 * 1. There is at least one zero in the array (product becomes 0).
 * 2. The count of negative numbers is even (product becomes positive).
 * 
 * If the count of negative numbers is odd and there are no zeros, 
 * the product is negative. To make it non-negative, we must remove 
 * exactly one negative number.
 * 
 * Algorithm:
 * 1. Count the number of zeros. If count > 0, return 0.
 * 2. Count the number of negative integers.
 * 3. If the count of negative integers is even, return 0.
 * 4. If the count of negative integers is odd, return 1.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) auxiliary space.
 */

void solve() {
    int N;
    cin >> N;
    
    int negative_count = 0;
    bool has_zero = false;
    
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        if (val == 0) {
            has_zero = true;
        } else if (val < 0) {
            negative_count++;
        }
    }
    
    if (has_zero) {
        cout << 0 << "\n";
    } else {
        if (negative_count % 2 == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
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