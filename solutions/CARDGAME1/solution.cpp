#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N cards numbered 1 to N.
 * Chef throws card X.
 * Chefina needs to pick a card Y from the remaining (N-1) cards such that (X + Y) is even.
 * 
 * (X + Y) is even if:
 * 1. X is even and Y is even.
 * 2. X is odd and Y is odd.
 * 
 * So, if X is even, Chefina must pick an even card from the remaining set.
 * If X is odd, Chefina must pick an odd card from the remaining set.
 * 
 * Let:
 * Total even cards in 1..N = floor(N / 2)
 * Total odd cards in 1..N = ceil(N / 2)
 * 
 * If X is even:
 * Chefina needs an even card. There are floor(N / 2) even cards total.
 * Since X itself is even, the remaining count is floor(N / 2) - 1.
 * 
 * If X is odd:
 * Chefina needs an odd card. There are ceil(N / 2) odd cards total.
 * Since X itself is odd, the remaining count is ceil(N / 2) - 1.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        long long even_count = n / 2;
        long long odd_count = (n + 1) / 2;

        if (x % 2 == 0) {
            // X is even, need to pick an even card from remaining
            cout << (even_count - 1) << "\n";
        } else {
            // X is odd, need to pick an odd card from remaining
            cout << (odd_count - 1) << "\n";
        }
    }

    return 0;
}