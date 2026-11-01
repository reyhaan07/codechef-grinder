#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N types of colors, with A_i balls of color i.
 * We need to place balls into boxes such that no box contains two balls of the same color.
 * This means for any color i, all A_i balls must be placed in distinct boxes.
 * Therefore, if we have A_i balls of color i, we need at least A_i boxes.
 * Since this must hold for all colors, the minimum number of boxes required is 
 * the maximum value among all A_i. 
 * 
 * If we have max(A_i) boxes, we can distribute the balls such that no box 
 * contains two balls of the same color by using a cyclic assignment or 
 * simply filling boxes greedily.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) auxiliary space (excluding input storage).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        
        long long max_val = 0;
        for (int i = 0; i < n; ++i) {
            long long a;
            cin >> a;
            if (a > max_val) {
                max_val = a;
            }
        }
        
        cout << max_val << "\n";
    }
    
    return 0;
}