#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N friends who want to register for a course.
 * The course has a maximum capacity M.
 * K students are already registered.
 * The number of available seats is (M - K).
 * All N friends can register if and only if N <= (M - K).
 * This is equivalent to N + K <= M.
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= N <= M <= 100
 * 0 <= K <= M
 * Since N, M, K are small (up to 100), standard int is sufficient.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        // Check if the remaining capacity (M - K) is enough for N friends
        if (n <= (m - k)) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}