#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N cupcakes. He chooses a package size A (1 <= A <= N).
 * The number of leftover cupcakes is N % A.
 * We want to maximize N % A.
 * 
 * Let's test small values of N:
 * N = 2: 2%1=0, 2%2=0. Max leftover 0, largest A is 2.
 * N = 3: 3%1=0, 3%2=1, 3%3=0. Max leftover 1, largest A is 2.
 * N = 4: 4%1=0, 4%2=0, 4%3=1, 4%4=0. Max leftover 1, largest A is 3.
 * N = 5: 5%1=0, 5%2=1, 5%3=2, 5%4=1, 5%5=0. Max leftover 2, largest A is 3.
 * N = 6: 6%1=0, 6%2=0, 6%3=0, 6%4=2, 6%5=1, 6%6=0. Max leftover 2, largest A is 4.
 * 
 * Pattern:
 * If we choose A = floor(N/2) + 1, then N % A = N % (floor(N/2) + 1).
 * For N=5, A=3, 5%3=2.
 * For N=6, A=4, 6%4=2.
 * For any N > 2, choosing A = N/2 + 1 results in N % A = N - (N/2 + 1) = N/2 - 1.
 * This is the maximum possible remainder because if A > N/2, the remainder is N - A.
 * To maximize N - A, we need the smallest A > N/2, which is floor(N/2) + 1.
 * 
 * For N=2, the formula gives 2/2 + 1 = 2. 2%2 = 0. Correct.
 * For N > 2, the answer is N/2 + 1.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        
        // Based on the mathematical derivation:
        // For N=2, output 2.
        // For N > 2, output N/2 + 1.
        if (n <= 2) {
            cout << n << "\n";
        } else {
            cout << (n / 2) + 1 << "\n";
        }
    }
    return 0;
}