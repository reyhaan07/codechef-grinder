#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef draws two numbers A and B (1 <= A, B <= 10).
 * We need a third number C (1 <= C <= 10) such that A + B + C = 21.
 * This implies C = 21 - (A + B).
 * Since C must be between 1 and 10 inclusive, we check if 1 <= 21 - (A + B) <= 10.
 * If this condition holds, the answer is 21 - (A + B).
 * Otherwise, the answer is -1.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int sum_ab = a + b;
        int c = 21 - sum_ab;
        
        // Check if the required third number is within the valid range [1, 10]
        if (c >= 1 && c <= 10) {
            cout << c << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    
    return 0;
}