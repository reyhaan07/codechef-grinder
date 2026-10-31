#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given:
 * xa: water per type A coconut
 * xb: pulp per type B coconut
 * Xa: total water required
 * Xb: total pulp required
 * 
 * Since xa divides Xa and xb divides Xb, the number of coconuts of type A is Xa / xa,
 * and the number of coconuts of type B is Xb / xb.
 * The total number of coconuts is (Xa / xa) + (Xb / xb).
 * 
 * Constraints:
 * T <= 15000
 * Values are within standard integer range (up to 1500), so 'int' is sufficient.
 * Time complexity per test case: O(1)
 * Total time complexity: O(T)
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        
        // Calculate number of coconuts for each type
        int countA = Xa / xa;
        int countB = Xb / xb;
        
        // Output the total
        cout << (countA + countB) << "\n";
    }
    
    return 0;
}