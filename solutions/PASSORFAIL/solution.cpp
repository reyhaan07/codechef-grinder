#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total questions = N
 * Correct answers = X
 * Incorrect answers = N - X
 * Marks for correct = 3
 * Penalty for incorrect = -1
 * Total Score = (X * 3) + ((N - X) * -1)
 *             = 3X - N + X
 *             = 4X - N
 * Chef passes if Total Score >= P
 * 
 * Constraints:
 * N <= 100, X <= N, P <= 3*N
 * The score will fit in a standard integer, but using long long is safe practice.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x, p;
        cin >> n >> x >> p;

        // Calculate score based on the formula derived: 4*X - N
        long long score = (4 * x) - n;

        // Check if score meets the passing criteria
        if (score >= p) {
            cout << "PASS" << "\n";
        } else {
            cout << "FAIL" << "\n";
        }
    }

    return 0;
}