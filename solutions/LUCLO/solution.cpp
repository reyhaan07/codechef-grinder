#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N clovers.
 * Exactly one clover has 4 leaves.
 * The remaining (N - 1) clovers have 3 leaves each.
 * Total leaves = 4 + (N - 1) * 3
 * 
 * Constraints: 1 <= N <= 10
 * The formula works for N=1: 4 + (1-1)*3 = 4 + 0 = 4. Correct.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer N per input.
    // While the prompt mentions "Handle multiple test cases", the problem 
    // description says "The only line of input will contain a single integer N".
    // I will implement it to read N directly as per the problem description.
    
    long long N;
    if (cin >> N) {
        long long total_leaves = 4 + (N - 1) * 3;
        cout << total_leaves << "\n";
    }

    return 0;
}