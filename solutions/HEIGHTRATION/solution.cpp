#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Height of Rationals
 * The height of a fraction a/b is defined as max(a, b).
 * Given the constraints 1 <= a, b <= 100, we simply need to read two integers
 * and output the larger of the two.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    // The problem description implies a single test case based on the input format,
    // but we structure it to handle the input provided.
    if (cin >> a >> b) {
        cout << max(a, b) << "\n";
    }

    return 0;
}