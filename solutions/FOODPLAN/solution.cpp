#include <bits/stdc++.h>
using namespace std;

void solve() {
    double n, m;
    cin >> n >> m;
    
    // 10% discount on online order
    double online_cost = n * 0.9;
    
    if (online_cost < m) {
        cout << "ONLINE\n";
    } else if (online_cost > m) {
        cout << "DINING\n";
    } else {
        cout << "EITHER\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}