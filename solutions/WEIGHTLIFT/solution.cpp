#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given 6 integers representing two attempts for each of the three rounds.
 * For each round (pair of attempts), we need to select the maximum value.
 * The total score is the sum of the maximums of the three rounds.
 * 
 * Constraints:
 * 200 <= A1, A2, B1, B2, C1, C2 <= 300
 * The maximum possible sum is 300 + 300 + 300 = 900, which fits comfortably in a standard int.
 * However, using long long is a safe practice in competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a1, a2, b1, b2, c1, c2;
    
    // Read the 6 integers from standard input
    if (cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2) {
        // Calculate the maximum for each round
        long long round1 = max(a1, a2);
        long long round2 = max(b1, b2);
        long long round3 = max(c1, c2);
        
        // Calculate the total score
        long long total_score = round1 + round2 + round3;
        
        // Output the result
        cout << total_score << "\n";
    }

    return 0;
}