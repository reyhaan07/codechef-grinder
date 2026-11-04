#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Remaining Neighborhoods
 * The city has 100 neighborhoods in total.
 * Given N neighborhoods already visited, the number of remaining neighborhoods is 100 - N.
 * Constraints: 0 <= N <= 100.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single input N, but standard competitive 
    // programming practice often involves test cases. If the problem specifies 
    // a single line of input, we handle it accordingly.
    if (!(cin >> t)) return 0;
    
    // Based on the problem description, N is the number of neighborhoods visited.
    // We calculate the remaining as 100 - N.
    long long n = t;
    long long remaining = 100 - n;
    
    cout << remaining << "\n";

    return 0;
}