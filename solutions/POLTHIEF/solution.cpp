#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Policeman is at X with speed 2.
 * Thief is at Y with speed 1.
 * Let the time taken be 't'.
 * The policeman's position at time 't' is X + 2t (if moving right) or X - 2t (if moving left).
 * The thief's position at time 't' is Y + t (if moving right) or Y - t (if moving left).
 * 
 * To catch the thief, the policeman must cover the distance |X - Y|.
 * Since the policeman moves at speed 2 and the thief at speed 1, the relative speed
 * at which the policeman closes the gap is (2 - 1) = 1 unit per second.
 * Therefore, the time taken to close the distance |X - Y| is:
 * t = |X - Y| / (2 - 1) = |X - Y|.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // The time taken to catch the thief is the absolute difference 
        // between their starting positions because the relative speed is 1.
        long long time_taken = abs(x - y);
        
        cout << time_taken << "\n";
    }
    
    return 0;
}