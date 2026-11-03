#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int chef_points = 0;
    int opponent_points = 0;
    
    for (char c : s) {
        if (c == '1') {
            chef_points++;
        } else {
            opponent_points++;
        }
    }
    
    if (chef_points > opponent_points) {
        cout << "WIN\n";
    } else {
        cout << "LOSE\n";
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