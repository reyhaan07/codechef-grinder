#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N students and M tickets.
 * If N > M, the number of students who won't get a ticket is (N - M).
 * If N <= M, all students get a ticket, so the number of students who won't get one is 0.
 * This can be represented as max(0, N - M).
 * 
 * Constraints:
 * T <= 1000
 * N, M <= 10^5
 * The result will fit in a standard integer, but using long long is safe practice.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        if (n > m) {
            cout << (n - m) << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}