#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * In a knockout tournament with N teams, each match eliminates exactly one team.
 * To declare a winner, N-1 teams must be eliminated.
 * Therefore, every knockout tournament with N teams will result in exactly N-1 matches.
 * 
 * The problem asks if it is possible for the tournament to have AT LEAST M matches.
 * Since every tournament with N teams results in exactly N-1 matches, the number of matches 
 * is fixed at N-1.
 * 
 * Thus, the condition "at least M matches" is satisfied if and only if:
 * N - 1 >= M
 * 
 * Constraints:
 * 1 <= T <= 10^4
 * 1 <= N, M <= 100
 * 
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        // The number of matches in a knockout tournament with N teams is always N-1.
        // We check if N-1 >= M.
        if (n - 1 >= m) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}