#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    if (cin >> x >> y) {
        if (x - y >= 18) {
            cout << "RCB\n";
        } else {
            cout << "CSK\n";
        }
    }

    return 0;
}