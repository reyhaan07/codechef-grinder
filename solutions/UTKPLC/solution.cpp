#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Utkarsh and Placement tests
 * Approach:
 * We are given a preference order of 3 companies (first, second, third).
 * We are given 2 offers (x, y).
 * Since there are only 3 companies, we can simply iterate through the preference
 * order and check if the current company in the preference list is one of the
 * offers (x or y). The first one we encounter is the one Utkarsh will accept.
 */

void solve() {
    char p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    
    char x, y;
    cin >> x >> y;
    
    // Check preference order
    if (p1 == x || p1 == y) {
        cout << p1 << "\n";
    } else if (p2 == x || p2 == y) {
        cout << p2 << "\n";
    } else {
        cout << p3 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}