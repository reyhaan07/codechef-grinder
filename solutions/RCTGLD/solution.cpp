#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A rectangle with sides 'a' and 'b' (where a, b are integers) has a perimeter 
 * of 2 * (a + b).
 * The constraint is that the total ink used must be at most N.
 * So, 2 * (a + b) <= N, which simplifies to a + b <= N / 2.
 * To maximize the area (a * b) given a + b <= S (where S = floor(N / 2)),
 * we should make 'a' and 'b' as close to each other as possible.
 * 
 * Let S = N / 2.
 * If S < 2, we cannot form a rectangle with positive integer sides (minimum 1x1 needs perimeter 4, so N >= 4).
 * If S >= 2, we want to maximize a * b subject to a + b <= S.
 * The product is maximized when a and b are as close as possible to S/2.
 * Let a = floor(S / 2) and b = S - a.
 * 
 * Example 1: N = 8, S = 4. a = 2, b = 2. Area = 4.
 * Example 2: N = 1, S = 0. Area = 0.
 * Example 3: N = 15, S = 7. a = 3, b = 4. Area = 12.
 */

void solve() {
    long long N;
    cin >> N;
    
    long long S = N / 2;
    
    if (S < 2) {
        cout << 0 << "\n";
    } else {
        long long a = S / 2;
        long long b = S - a;
        cout << a * b << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}