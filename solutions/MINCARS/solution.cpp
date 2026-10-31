#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each car can hold at most 4 people.
 * To find the minimum number of cars for N people, we need to calculate ceil(N / 4.0).
 * Using integer arithmetic, this is equivalent to (N + 3) / 4.
 * 
 * Constraints:
 * T <= 1000
 * N <= 1000
 * Time Complexity: O(1) per test case, O(T) total.
 * Space Complexity: O(1).
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
        
        // Calculate minimum cars using integer division
        // (n + 3) / 4 performs ceiling division for positive integers
        long long cars = (n + 3) / 4;
        
        cout << cars << "\n";
    }
    
    return 0;
}