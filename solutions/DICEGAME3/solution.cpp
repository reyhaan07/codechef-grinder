#include <bits/stdc++.h>
using namespace std;

/**
 * Revised Analysis:
 * N=1: [6] -> 6
 * N=2: [1, 6] -> 1 + 12 = 13
 * N=3: [6, 1, 6] -> 6 + 1 + 12 = 19
 * N=4: [1, 6, 1, 6] -> 1 + 12 + 1 + 12 = 26
 * N=5: [6, 1, 6, 1, 6] -> 6 + 1 + 12 + 1 + 12 = 32
 * 
 * Pattern:
 * If N is even: (N/2) * 13
 * If N is odd: ((N-1)/2) * 13 + 6
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        if (n % 2 == 0) {
            cout << (n / 2) * 13 << "\n";
        } else {
            cout << ((n - 1) / 2) * 13 + 6 << "\n";
        }
    }
    return 0;
}