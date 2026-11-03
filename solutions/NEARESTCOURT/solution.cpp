#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have two points X and Y on a number line. We want to find a point Z 
 * such that max(|X - Z|, |Y - Z|) is minimized.
 * 
 * Let D = |X - Y|. The midpoint between X and Y is (X + Y) / 2.0.
 * To minimize the maximum distance, Z should be as close to the midpoint as possible.
 * 
 * If D is even, the midpoint is an integer. Choosing Z = (X + Y) / 2 
 * results in |X - Z| = |Y - Z| = D / 2.
 * 
 * If D is odd, the midpoint is something like k.5. We can choose Z = floor(k.5) 
 * or ceil(k.5). In either case, one person travels (D - 1) / 2 and the other 
 * travels (D + 1) / 2. The maximum of these is (D + 1) / 2.
 * 
 * In both cases, the answer is ceil(D / 2.0), which can be calculated using 
 * integer arithmetic as (abs(X - Y) + 1) / 2.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        long long diff = abs(x - y);
        
        // The minimum value of max(|X-Z|, |Y-Z|) is ceil(diff / 2.0)
        // Using integer division: (diff + 1) / 2
        long long result = (diff + 1) / 2;
        
        cout << result << "\n";
    }
    
    return 0;
}