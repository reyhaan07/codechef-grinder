#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let C be the number of correct answers and W be the number of wrong answers.
 * Total marks X = 3 * C - 1 * W.
 * We want to minimize W such that 0 <= C + W <= 100.
 * 
 * From X = 3C - W, we have W = 3C - X.
 * Since W >= 0, we need 3C >= X, so C >= ceil(X/3).
 * To minimize W, we should pick the smallest possible C, which is ceil(X/3).
 * Let C_min = ceil(X/3). Then W = 3 * C_min - X.
 * 
 * However, we must ensure that the remainder of X divided by 3 is handled correctly.
 * If X % 3 == 0, then W = 0.
 * If X % 3 == 1, then we need 1 wrong answer to make the marks (3*C - 1 = X).
 * If X % 3 == 2, then we need 2 wrong answers to make the marks (3*C - 2 = X).
 * 
 * Effectively, the number of wrong answers is (3 - (X % 3)) % 3.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x;
        cin >> x;
        
        // The remainder when divided by 3 determines the minimum wrong answers needed
        // to reach a multiple of 3 that is >= x.
        int remainder = x % 3;
        if (remainder == 0) {
            cout << 0 << "\n";
        } else {
            cout << (3 - remainder) << "\n";
        }
    }
    return 0;
}