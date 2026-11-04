#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int chef_marks = a[0];
    int ans = 0;
    
    // To ensure Chef passes, the cutoff X can be at most chef_marks.
    // To minimize the number of students passing, the professor should set 
    // the cutoff X as high as possible while still letting Chef pass.
    // The maximum possible valid cutoff such that Chef passes (X <= chef_marks) 
    // is X = chef_marks + 1 if we want to fail others, but wait:
    // If X = chef_marks + 1, Chef will FAIL because Chef's marks are chef_marks (< X).
    // The condition to pass is marks >= X.
    // Therefore, the maximum cutoff such that Chef passes (Chef's marks >= X) is X = chef_marks.
    // At cutoff X = chef_marks, any student with marks >= chef_marks will pass.
    
    for (int i = 0; i < n; i++) {
        if (a[i] >= chef_marks) {
            ans++;
        }
    }
    
    cout << ans << "\n";
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