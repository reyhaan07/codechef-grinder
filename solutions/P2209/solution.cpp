#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given X and Y. We need to find all multiples of X in the range [X, Y].
 * Let these multiples be M = {X, 2X, 3X, ..., kX} where kX <= Y.
 * We calculate S_even as the sum of all even numbers in M,
 * and S_odd as the sum of all odd numbers in M.
 * We need to check if S_even >= S_odd.
 * 
 * Constraints are small (X, Y <= 100), so a simple loop is efficient enough.
 * Time complexity per test case: O(Y/X), which is O(100) = O(1).
 * Total time complexity: O(T * (Y/X)), well within the 1s limit for 10^4 test cases.
 */

void solve() {
    int X, Y;
    if (!(cin >> X >> Y)) return;

    long long s_even = 0;
    long long s_odd = 0;

    // Iterate through all multiples of X up to Y
    for (int i = X; i <= Y; i += X) {
        if (i % 2 == 0) {
            s_even += i;
        } else {
            s_odd += i;
        }
    }

    if (s_even >= s_odd) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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