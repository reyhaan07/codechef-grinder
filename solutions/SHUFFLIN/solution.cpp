#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to maximize the sum of B_i = (A_i + i) % 2.
 * B_i = 1 if (A_i + i) is odd, which happens if A_i and i have different parity.
 * B_i = 0 if (A_i + i) is even, which happens if A_i and i have the same parity.
 * 
 * Let:
 * - odd_A be the count of odd numbers in A.
 * - even_A be the count of even numbers in A.
 * - odd_pos be the count of odd indices (1, 3, 5, ...) in the array (1 to N).
 * - even_pos be the count of even indices (2, 4, 6, ...) in the array (1 to N).
 * 
 * We want to maximize the number of pairs (A_i, i) such that (A_i + i) is odd.
 * This happens if:
 * 1. A_i is odd and i is even.
 * 2. A_i is even and i is odd.
 * 
 * Total sum = min(odd_A, even_pos) + min(even_A, odd_pos).
 * 
 * Constraints:
 * N <= 10^5, sum of N <= 3*10^5.
 * Time complexity: O(N) per test case.
 * Space complexity: O(1) auxiliary space (excluding input storage).
 */

void solve() {
    int N;
    cin >> N;
    
    int odd_A = 0;
    int even_A = 0;
    
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        if (val % 2 != 0) {
            odd_A++;
        } else {
            even_A++;
        }
    }
    
    int odd_pos = (N + 1) / 2;
    int even_pos = N / 2;
    
    // We want to place odd numbers in even positions and even numbers in odd positions
    // to get a 1 in the resulting array B.
    // Number of odd numbers placed in even positions: min(odd_A, even_pos)
    // Number of even numbers placed in odd positions: min(even_A, odd_pos)
    
    int result = min(odd_A, even_pos) + min(even_A, odd_pos);
    cout << result << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}