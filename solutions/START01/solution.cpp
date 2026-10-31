#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Number Mirror
 * The task is to read an integer N and print it back.
 * Constraints: 0 <= N <= 10^5.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem statement implies reading a single integer N.
    // Using long long to ensure safety, though int suffices for 10^5.
    long long n;
    if (cin >> n) {
        cout << n << "\n";
    }

    return 0;
}