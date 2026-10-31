#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: FCTRL2 - Small factorials
 * Since n can be up to 100, n! will exceed the capacity of a 64-bit integer.
 * We must use an array-based approach to perform arbitrary-precision multiplication.
 */

void solve() {
    int n;
    cin >> n;

    // Array to store the digits of the factorial. 
    // 100! has 158 digits, so 200 is sufficient.
    int res[200];
    res[0] = 1;
    int res_size = 1;

    // Multiply numbers from 2 to n
    for (int x = 2; x <= n; x++) {
        int carry = 0;
        for (int i = 0; i < res_size; i++) {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;
            carry = prod / 10;
        }
        // Store remaining carry
        while (carry) {
            res[res_size] = carry % 10;
            carry /= 10;
            res_size++;
        }
    }

    // Print the result in reverse order
    for (int i = res_size - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << "\n";
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