#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each round of Surya Namaskar consists of 12 poses.
 * Given N total poses, the number of completed rounds is the integer division of N by 12.
 * 
 * Constraints:
 * 1 <= N <= 100
 * Time Complexity: O(1) per test case
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input N per run based on the sample format,
    // but standard competitive programming practice often involves a test case count.
    // Given the problem description format, we read N directly.
    int N;
    if (!(cin >> N)) return 0;

    // Calculate completed rounds using integer division
    int rounds = N / 12;

    // Output the result
    cout << rounds << "\n";

    return 0;
}