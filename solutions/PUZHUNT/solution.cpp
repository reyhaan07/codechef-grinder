#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        if (n >= 6 && n <= 8) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}