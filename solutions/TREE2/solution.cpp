#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have sticks of various heights. In one operation, we choose a height H
 * and cut all sticks taller than H down to H.
 * The constraint is that all sticks cut in one operation must have their 
 * upper parts reduced by the same length.
 * 
 * Let the current set of distinct positive heights be {h1, h2, ..., hk} 
 * where h1 < h2 < ... < hk.
 * If we choose H = h1, all sticks with height > h1 will be cut to h1.
 * This effectively reduces the number of distinct positive heights by at least one.
 * Specifically, if we pick the smallest positive height as our H, we reduce 
 * all sticks taller than that height to that height, effectively "removing" 
 * the smallest height from the set of distinct positive values.
 * 
 * Therefore, the minimum number of operations is simply the number of 
 * distinct positive heights present in the initial array.
 * If a height is 0, it does not need to be cut.
 */

void solve() {
    int N;
    cin >> N;
    
    // Use a set to store distinct positive heights
    set<int> distinct_heights;
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        if (a > 0) {
            distinct_heights.insert(a);
        }
    }
    
    // The number of operations is equal to the number of distinct positive heights
    cout << distinct_heights.size() << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}