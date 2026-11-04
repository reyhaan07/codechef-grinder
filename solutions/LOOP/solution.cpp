#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * On a circular track of length M, there are two ways to travel between 
 * checkpoint A and checkpoint B:
 * 1. The direct path along the circle: |A - B|
 * 2. The path going the "other way" around the circle: M - |A - B|
 * 
 * Since we want the minimum distance, we simply take the minimum of these two values.
 * Given M can be up to 10^9, we use long long to prevent any potential overflow 
 * during calculations, although standard int would suffice for the subtraction.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, m;
        cin >> a >> b >> m;

        // Calculate the absolute difference between A and B
        long long diff = abs(a - b);

        // The two possible distances are diff and (m - diff)
        // We output the minimum of the two
        long long ans = min(diff, m - diff);

        cout << ans << "\n";
    }

    return 0;
}