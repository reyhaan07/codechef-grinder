#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is at A, Chefina is at B.
 * In one step, Chef can move at most K units.
 * The distance to cover is |A - B|.
 * Since each step covers at most K units, the minimum number of steps
 * required is ceil(|A - B| / K).
 * 
 * Using integer arithmetic, ceil(x / y) can be calculated as (x + y - 1) / y.
 */

void solve() {
    long long A, B, K;
    cin >> A >> B >> K;
    
    long long distance = abs(A - B);
    
    // If distance is 0, steps required is 0.
    if (distance == 0) {
        cout << 0 << "\n";
        return;
    }
    
    // Calculate ceil(distance / K)
    long long steps = (distance + K - 1) / K;
    cout << steps << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}