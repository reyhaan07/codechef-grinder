#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x > y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}