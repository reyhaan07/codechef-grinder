#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Rahul needs to write 5 pages.
 * Time taken per page = X minutes.
 * Total time required = 5 * X minutes.
 * Time limit = 60 minutes.
 * Rahul can complete the assignment if 5 * X <= 60.
 * 
 * Constraints: 1 <= X <= 1000.
 * 5 * 1000 = 5000, which fits in a standard 32-bit integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X per test case,
    // but standard competitive programming practice often involves 
    // handling a single input as per the problem statement.
    // Given the constraints and format, we read X once.
    
    int X;
    if (!(cin >> X)) return 0;

    // Calculate total time needed
    long long total_time = 5LL * X;

    // Check against the 60-minute limit
    if (total_time <= 60) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}