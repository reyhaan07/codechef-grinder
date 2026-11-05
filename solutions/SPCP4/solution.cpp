#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total students = N
 * Boys = X
 * Girls = N - X
 * Group size = K
 * 
 * Boys form groups: X % K boys are left over.
 * Girls form groups: (N - X) % K girls are left over.
 * 
 * Let remB = X % K
 * Let remG = (N - X) % K
 * 
 * Dancing requires 1 boy and 1 girl.
 * The number of pairs that can dance is min(remB, remG).
 * 
 * The number of students remaining after dancing is:
 * (remB + remG) - 2 * min(remB, remG)
 * This simplifies to |remB - remG|.
 * 
 * Constraints:
 * N, K up to 10^9, so use long long.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, x, k;
        cin >> n >> x >> k;

        long long boys = x;
        long long girls = n - x;

        long long remB = boys % k;
        long long remG = girls % k;

        // Number of pairs that can dance
        long long dancingPairs = min(remB, remG);

        // Total remaining students after forming groups
        long long totalRemaining = remB + remG;

        // Each dancing pair consumes 2 students (1 boy, 1 girl)
        // Remaining students who must read = totalRemaining - 2 * dancingPairs
        long long reading = totalRemaining - (2 * dancingPairs);

        cout << reading << "\n";
    }

    return 0;
}