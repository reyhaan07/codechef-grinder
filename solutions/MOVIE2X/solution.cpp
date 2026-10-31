#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The movie has a total duration of X minutes.
 * The first Y minutes are watched at 2x speed, meaning they take Y/2 minutes to watch.
 * The remaining (X - Y) minutes are watched at 1x speed, meaning they take (X - Y) minutes to watch.
 * Total time = (Y / 2) + (X - Y).
 * 
 * Constraints:
 * 1 <= X, Y <= 1000
 * Y is even.
 * Time complexity: O(1) per test case.
 * Space complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description does not explicitly state multiple test cases,
    // but standard competitive programming practice often includes them.
    // Based on the provided format, we read X and Y once.
    int X, Y;
    if (cin >> X >> Y) {
        // Calculate time spent:
        // First Y minutes at 2x speed = Y/2
        // Remaining X-Y minutes at 1x speed = X-Y
        int total_time = (Y / 2) + (X - Y);
        
        cout << total_time << "\n";
    }

    return 0;
}