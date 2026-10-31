#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The chef must choose one ingredient from {A, B} and one from {C, D}.
 * The total tastiness is the sum of the chosen ingredients.
 * To maximize the sum, we should pick the maximum of {A, B} and the maximum of {C, D}.
 * Max Tastiness = max(a, b) + max(c, d).
 * 
 * Constraints:
 * 1 <= a, b, c, d <= 100.
 * The sum will be at most 200, which fits comfortably in an integer.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Calculate the maximum possible tastiness
        int max_first = max(a, b);
        int max_second = max(c, d);
        
        cout << (max_first + max_second) << "\n";
    }
    
    return 0;
}