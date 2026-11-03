#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long s;
        cin >> s;
        // Calculation: S seconds * 24 frames/second * 1000 words/frame
        long long ans = s * 24 * 1000;
        cout << ans << "\n";
    }

    return 0;
}