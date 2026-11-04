#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Problem Analysis:
 * Chef starts with N toys. Each day he breaks one toy if he has any.
 * After M days, the number of toys remaining is max(0, N - M).
 * 
 * Note: The problem description implies a single test case per input,
 * without an initial test case count 't'.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    // Read N and M directly as there is no 't' test case count
    if (cin >> n >> m) {
        // Calculate remaining toys
        long long remaining = n - m;
        
        // If remaining is negative, he has 0 toys left
        if (remaining < 0) {
            cout << 0 << endl;
        } else {
            cout << remaining << endl;
        }
    }
    
    return 0;
}