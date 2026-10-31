#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Enormous Input Test (INTEST)
 * Complexity Analysis:
 * Time Complexity: O(N), where N is the number of integers. Given N up to 10^7,
 * we must use fast I/O to ensure the solution runs within the 8s time limit.
 * Space Complexity: O(1), as we only need to store the count and the current number.
 */

int main() {
    // Fast I/O is critical for N = 10^7
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    
    // Read N and K
    if (!(cin >> n >> k)) return 0;

    int count = 0;
    long long a;

    // Process each of the N integers
    for (int i = 0; i < n; ++i) {
        cin >> a;
        // Check divisibility
        if (a % k == 0) {
            count++;
        }
    }

    // Output the final count
    cout << count << "\n";

    return 0;
}