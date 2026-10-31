#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x > 100) {
            cout << x - 10 << "\n";
        } else {
            cout << x << "\n";
        }
    }

    return 0;
}