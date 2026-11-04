#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to maximize |A_x - A_y| + |A_y - A_z| + |A_z - A_x|.
 * Let the three chosen values be a, b, and c.
 * Without loss of generality, assume a <= b <= c.
 * The expression becomes |a - b| + |b - c| + |c - a|
 * = (b - a) + (c - b) + (c - a)
 * = b - a + c - b + c - a
 * = 2 * (c - a)
 * 
 * To maximize 2 * (c - a), we need to maximize the difference between the 
 * largest and smallest elements in the array.
 * Thus, we should pick the minimum element of the array as 'a' and the 
 * maximum element of the array as 'c'. For 'b', any element between 
 * 'a' and 'c' (inclusive) will work. Since N >= 3, we can always pick 
 * distinct indices.
 * 
 * Time Complexity: O(N) per test case to find min and max.
 * Space Complexity: O(1) if we process elements on the fly, or O(N) to store.
 */

void solve() {
    int n;
    cin >> n;
    
    long long min_val = 2e9; // Larger than any possible A_i
    long long max_val = -2e9; // Smaller than any possible A_i
    
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        if (a < min_val) min_val = a;
        if (a > max_val) max_val = a;
    }
    
    // The maximum value is 2 * (max - min)
    long long result = 2 * (max_val - min_val);
    cout << result << "\n";
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