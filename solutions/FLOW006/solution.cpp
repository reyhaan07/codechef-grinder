#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Sum of Digits
 * Approach: To find the sum of digits of an integer N, we can repeatedly 
 * take the modulo of N by 10 to get the last digit, add it to a sum variable, 
 * and then perform integer division by 10 to remove the last digit.
 * Time Complexity: O(T * log10(N))
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long n;
        cin >> n;

        // Handle negative numbers if they were to occur (though constraints say N >= 1)
        if (n < 0) n = -n;

        long long sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }

        cout << sum << "\n";
    }

    return 0;
}