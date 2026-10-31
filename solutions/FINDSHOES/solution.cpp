#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs N pairs of shoes. Each pair consists of 1 left and 1 right shoe.
 * Total shoes needed: N left shoes and N right shoes.
 * Chef already has M left shoes.
 * 
 * Case 1: M >= N
 * Chef has enough left shoes. He only needs to buy N right shoes.
 * Total to buy = N.
 * 
 * Case 2: M < N
 * Chef needs (N - M) more left shoes and N right shoes.
 * Total to buy = (N - M) + N = 2*N - M.
 * 
 * Both cases can be generalized:
 * If M >= N, result is N.
 * If M < N, result is 2*N - M.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long ans;
        if (m >= n) {
            // Chef has enough left shoes, just need N right shoes
            ans = n;
        } else {
            // Chef needs (n - m) left shoes and n right shoes
            ans = (n - m) + n;
        }

        cout << ans << "\n";
    }

    return 0;
}