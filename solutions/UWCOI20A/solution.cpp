#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        long long max_height = -1; // Heights are non-negative
        for (int i = 0; i < n; ++i) {
            long long h;
            cin >> h;
            if (h > max_height) {
                max_height = h;
            }
        }
        
        cout << max_height << "\n";
    }

    return 0;
}