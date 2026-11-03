#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let the number of stones in the first box be x and the second be y.
 * Total stones S = X + Y.
 * After moving 't' stones, let the new counts be x' and y'.
 * x' + y' = S.
 * We want |x' - y'| = K.
 * 
 * Substituting y' = S - x':
 * |x' - (S - x')| = K
 * |2x' - S| = K
 * 
 * This implies two possibilities:
 * 1) 2x' - S = K  => 2x' = S + K => x' = (S + K) / 2
 * 2) 2x' - S = -K => 2x' = S - K => x' = (S - K) / 2
 * 
 * For x' to be a valid number of stones, it must be an integer (S+K must be even)
 * and 0 <= x' <= S.
 * 
 * The number of moves required is |x' - X|.
 * Since we can move stones from box 1 to 2 or vice versa, we check both 
 * possible target values for x' and pick the one that is reachable.
 * Actually, since we can move any number of stones, if a valid x' exists,
 * the number of moves is simply |x' - X|.
 */

void solve() {
    long long X, Y, K;
    cin >> X >> Y >> K;
    
    long long S = X + Y;
    
    // We need |x' - y'| = K and x' + y' = S
    // Adding equations: 2x' = S + K => x' = (S + K) / 2
    // Subtracting equations: 2y' = S - K => y' = (S - K) / 2
    
    // Check if a valid x' exists
    // 1. (S + K) must be even
    // 2. 0 <= x' <= S
    
    long long ans = -1;
    
    // Case 1: x' = (S + K) / 2
    if ((S + K) % 2 == 0) {
        long long x_prime = (S + K) / 2;
        if (x_prime >= 0 && x_prime <= S) {
            ans = abs(x_prime - X);
        }
    }
    
    // Case 2: x' = (S - K) / 2
    if ((S - K) % 2 == 0) {
        long long x_prime = (S - K) / 2;
        if (x_prime >= 0 && x_prime <= S) {
            long long moves = abs(x_prime - X);
            if (ans == -1 || moves < ans) {
                ans = moves;
            }
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