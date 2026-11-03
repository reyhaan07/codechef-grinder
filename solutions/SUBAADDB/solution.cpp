#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long N, A, B;
    cin >> N >> A >> B;
    
    // While the length is at least A, we replace a substring of length A with one of length B.
    // Each operation decreases the length by (A - B).
    // We can simulate this or calculate it mathematically.
    // Since N <= 100, simulation is extremely fast and safe.
    while (N >= A) {
        N = N - A + B;
    }
    
    cout << N << "\n";
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