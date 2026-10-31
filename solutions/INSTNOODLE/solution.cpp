#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X stoves.
 * Each stove can cook 1 packet per minute.
 * In Y minutes, each stove can cook Y packets.
 * Total packets = X * Y.
 * Since each customer orders 1 packet, the total number of customers served is X * Y.
 * 
 * Constraints:
 * 1 <= X, Y <= 1000
 * The maximum result is 1000 * 1000 = 1,000,000, which fits in a standard 32-bit integer.
 * Using long long is safe practice to prevent overflow in similar problems.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    // The problem description implies a single test case per run based on the input format.
    // However, if the platform expects multiple test cases, the logic remains X * Y.
    // Based on the provided input format description: "The first and only line of input contains..."
    if (cin >> X >> Y) {
        cout << (X * Y) << "\n";
    }

    return 0;
}