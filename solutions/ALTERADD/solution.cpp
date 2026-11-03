#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The operations are:
 * 1st: +1
 * 2nd: +2
 * 3rd: +1
 * 4th: +2
 * ...
 * Every pair of operations (1st and 2nd, 3rd and 4th, etc.) adds a total of 1 + 2 = 3 to A.
 * Let D = B - A.
 * We want to know if D can be represented as a sum of a sequence of 1s and 2s 
 * following the pattern 1, 2, 1, 2, ...
 * 
 * If we perform an even number of operations (say 2k operations), the total added is k * 3.
 * If we perform an odd number of operations (say 2k + 1 operations), the total added is k * 3 + 1.
 * 
 * So, D must be reachable if:
 * 1. D % 3 == 0 (We can reach it by performing pairs of operations)
 * 2. D % 3 == 1 (We can reach it by performing pairs of operations plus one final +1 operation)
 * 
 * If D % 3 == 2, it is impossible to reach B from A because:
 * - Any sequence of length 2k adds 3k (remainder 0 mod 3).
 * - Any sequence of length 2k+1 adds 3k+1 (remainder 1 mod 3).
 * There is no way to get a remainder of 2 mod 3.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long diff = b - a;
        
        // Check the remainder of the difference when divided by 3
        if (diff % 3 == 2) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
    
    return 0;
}