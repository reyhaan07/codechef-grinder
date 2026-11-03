#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has a trip of duration M minutes.
 * The song has a duration of S minutes.
 * We need to find how many times the song can be played completely.
 * This is equivalent to finding the integer quotient of M divided by S.
 * 
 * Mathematical formulation: floor(M / S)
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= M <= 100
 * 1 <= S <= 10
 * 
 * Since M and S are small, standard integer division in C++ will work perfectly.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long m, s;
        cin >> m >> s;
        
        // The number of complete plays is the integer division of M by S.
        // Since M and S are positive, M / S naturally performs floor division.
        long long result = m / s;
        
        cout << result << "\n";
    }
    
    return 0;
}