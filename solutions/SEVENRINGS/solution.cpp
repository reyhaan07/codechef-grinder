#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A valid phone number has exactly 5 digits and no leading zeros.
 * This means the number must be in the range [10000, 99999].
 * 
 * Given N items at cost X, the total bill is B = N * X.
 * We need to check if 10000 <= B <= 99999.
 * 
 * Constraints:
 * 1 <= N, X <= 1000
 * Max B = 1000 * 1000 = 1,000,000.
 * Using long long is safe, though int is sufficient here as 1,000,000 fits in a 32-bit int.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        long long bill = n * x;
        
        // Check if the bill is a 5-digit number (10000 to 99999)
        // A 5-digit number has no leading zeros by definition if it is >= 10000.
        if (bill >= 10000 && bill <= 99999) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}