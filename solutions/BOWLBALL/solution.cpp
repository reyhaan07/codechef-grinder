#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Bowling Balls
 * The task is to count how many integers A_i in a given array satisfy X <= A_i <= Y.
 * Constraints are small (N <= 100), so a simple linear scan O(N) per test case is optimal.
 */

void solve() {
    int N, X, Y;
    if (!(cin >> N >> X >> Y)) return;
    
    int count = 0;
    for (int i = 0; i < N; ++i) {
        int weight;
        cin >> weight;
        // Check if the current ball weight is within the inclusive range [X, Y]
        if (weight >= X && weight <= Y) {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}