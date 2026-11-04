#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    if (cin >> x) {
        // Even-numbered channels stopped working, so only odd-numbered channels work.
        // The number of working channels is ceil(X / 2.0) or (X + 1) / 2 using integer arithmetic.
        cout << (x + 1) / 2 << "\n";
    }
    
    return 0;
}