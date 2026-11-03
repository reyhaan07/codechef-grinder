#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to find if there exist 7 positive integers a_1, a_2, ..., a_7 such that:
 * a_i >= 2 * a_{i-1} for i = 2 to 7
 * and sum(a_i) <= X.
 * 
 * To minimize the sum, we should choose the smallest possible values for each gift:
 * a_1 = 1
 * a_2 = 2 * a_1 = 2
 * a_3 = 2 * a_2 = 4
 * a_4 = 2 * a_3 = 8
 * a_5 = 2 * a_4 = 16
 * a_6 = 2 * a_5 = 32
 * a_7 = 2 * a_6 = 64
 * 
 * The minimum sum required for 7 gifts is 1 + 2 + 4 + 8 + 16 + 32 + 64 = 127.
 * If X >= 127, Chef can always pick these values (or larger ones) to satisfy the condition.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        // The minimum sum of 7 gifts satisfying the condition is 127.
        // 1 + 2 + 4 + 8 + 16 + 32 + 64 = 127.
        if (x >= 127) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}