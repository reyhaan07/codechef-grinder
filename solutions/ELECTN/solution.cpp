#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Elections in Chefland
 * Approach: Iterate through the array of ages and count how many elements
 * are greater than or equal to X.
 * Time Complexity: O(N) per test case, O(T * N) total.
 * Space Complexity: O(1) auxiliary space (excluding input storage).
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        int eligible_count = 0;
        for (int i = 0; i < n; ++i) {
            int age;
            cin >> age;
            // A person is eligible if their age is at least X
            if (age >= x) {
                eligible_count++;
            }
        }
        
        cout << eligible_count << "\n";
    }
    
    return 0;
}