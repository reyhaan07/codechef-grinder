#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N total people, A of whom are infected.
 * The virus spreads if an infected person and an uninfected person meet without masks.
 * To stop the spread, we need to ensure that every interaction between an infected 
 * person and an uninfected person involves at least one person wearing a mask.
 * 
 * If we mask all A infected people, the virus cannot spread.
 * If we mask all (N - A) uninfected people, the virus cannot spread.
 * 
 * The goal is to find the minimum number of people to mask.
 * We can either mask all infected people (cost = A) or all uninfected people (cost = N - A).
 * Therefore, the answer is min(A, N - A).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, a;
        cin >> n >> a;
        
        // The minimum number of people to mask is the smaller group:
        // either the infected ones or the healthy ones.
        int ans = min(a, n - a);
        
        cout << ans << "\n";
    }
    
    return 0;
}