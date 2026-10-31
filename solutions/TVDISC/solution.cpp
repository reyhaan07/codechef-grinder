#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: TVDISC
 * The problem asks us to compare the final prices of two TVs after applying their respective discounts.
 * Final price of TV 1 = A - C
 * Final price of TV 2 = B - D
 * We compare these two values and output "First", "Second", or "Any".
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few integer variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        long long price1 = a - c;
        long long price2 = b - d;
        
        if (price1 < price2) {
            cout << "First" << "\n";
        } else if (price2 < price1) {
            cout << "Second" << "\n";
        } else {
            cout << "Any" << "\n";
        }
    }
    
    return 0;
}