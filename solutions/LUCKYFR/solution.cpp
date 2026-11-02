#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0;
        for (char c : s) {
            if (c == '4') {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}