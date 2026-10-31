#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A nibble is defined as 4 bits.
 * A program is "Good" if it takes exactly X nibbles, where X is a positive integer.
 * Given N bits, the number of nibbles is N / 4.
 * For this to be an integer, N must be perfectly divisible by 4 (i.e., N % 4 == 0).
 * Additionally, the problem states X must be a positive integer. Since N >= 1,
 * if N is divisible by 4, N/4 will be at least 1, satisfying the positive integer condition.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n;
        cin >> n;
        
        // Check if N is divisible by 4
        if (n % 4 == 0) {
            cout << "Good" << "\n";
        } else {
            cout << "Not Good" << "\n";
        }
    }
    
    return 0;
}