#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Bone Appetit
 * The problem asks for the total number of treats received from two sectors.
 * Total treats = (N * X) + (M * Y)
 * 
 * Constraints:
 * N, M <= 100
 * X, Y <= 1000
 * Max possible value = (100 * 1000) + (100 * 1000) = 200,000
 * This fits comfortably within a standard 32-bit integer, but using long long
 * is good practice to prevent overflow in competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the 
    // sample input format, but we structure it to handle the logic correctly.
    long long N, M;
    long long X, Y;

    if (!(cin >> N >> M)) return 0;
    if (!(cin >> X >> Y)) return 0;

    // Calculate total treats
    long long total_treats = (N * X) + (M * Y);

    // Output the result
    cout << total_treats << "\n";

    return 0;
}