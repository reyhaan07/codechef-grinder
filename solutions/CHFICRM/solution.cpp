#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef sells icecream for Rs. 5.
 * - If a customer pays 5: Chef keeps it.
 * - If a customer pays 10: Chef needs to return 5.
 * - If a customer pays 15: Chef needs to return 10.
 *   - He can return 10 by giving one 10-rupee coin (if available).
 *   - Or he can return 10 by giving two 5-rupee coins (if available).
 * 
 * We need to maintain the count of 5-rupee and 10-rupee coins Chef currently has.
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) auxiliary space.
 */

void solve() {
    int N;
    cin >> N;
    
    int count5 = 0;
    int count10 = 0;
    bool possible = true;
    
    for (int i = 0; i < N; ++i) {
        int coin;
        cin >> coin;
        
        if (!possible) continue;
        
        if (coin == 5) {
            count5++;
        } else if (coin == 10) {
            if (count5 >= 1) {
                count5--;
                count10++;
            } else {
                possible = false;
            }
        } else if (coin == 15) {
            // Try to give 10 back first (1x10 coin)
            if (count10 >= 1) {
                count10--;
            } 
            // Otherwise, try to give 10 back using 2x5 coins
            else if (count5 >= 2) {
                count5 -= 2;
            } else {
                possible = false;
            }
        }
    }
    
    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}