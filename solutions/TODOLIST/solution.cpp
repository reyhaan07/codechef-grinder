#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to keep problems with difficulty rating < 1000.
 * We need to count how many problems have a difficulty rating >= 1000.
 * These are the problems that must be removed.
 * 
 * Constraints:
 * T <= 1000, N <= 1000.
 * Total operations per test case: O(N).
 * Total time complexity: O(T * N), which is 10^6 operations, well within the 4s limit.
 * Space complexity: O(1) auxiliary space if we process input on the fly.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        
        int remove_count = 0;
        for (int i = 0; i < n; ++i) {
            int difficulty;
            cin >> difficulty;
            
            // If the difficulty is 1000 or greater, it must be removed.
            if (difficulty >= 1000) {
                remove_count++;
            }
        }
        
        cout << remove_count << "\n";
    }

    return 0;
}