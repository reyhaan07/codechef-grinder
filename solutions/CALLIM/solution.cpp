#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long current_calories = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (current_calories + a[i] <= k) {
            current_calories += a[i];
            count++;
        } else {
            break;
        }
    }
    
    cout << count << "\n";
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