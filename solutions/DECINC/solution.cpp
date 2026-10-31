#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (cin >> n) {
        if (n % 4 == 0) {
            n++;
        } else {
            n--;
        }
        cout << n << "\n";
    }
    
    return 0;
}