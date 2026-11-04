#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total bill = N
 * Number of people sharing = K + 1 (You + K friends)
 * Fair share per person = N / (K + 1)
 * Each friend pays back floor(N / (K + 1))
 * Total amount paid back by K friends = K * floor(N / (K + 1))
 * Net amount you paid = Total bill - Total amount paid back
 * Net amount = N - (K * floor(N / (K + 1)))
 * 
 * Constraints:
 * T <= 10^4, N <= 10^3, K <= 10
 * All calculations fit within standard integer types, but long long is used for safety.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        // The number of people sharing the bill is K friends + yourself = K + 1
        long long num_people = k + 1;
        
        // Each friend pays floor(N / (K + 1))
        long long share_per_person = n / num_people;
        
        // Total amount recovered from K friends
        long long total_recovered = k * share_per_person;
        
        // Net amount you paid
        long long net_paid = n - total_recovered;
        
        cout << net_paid << "\n";
    }

    return 0;
}