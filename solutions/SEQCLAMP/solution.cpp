#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The function f(X) is a composition of clamp functions.
 * A clamp function clamp(Y, A, B) = max(A, min(B, Y)).
 * The composition of clamp functions is also a clamp function.
 * Specifically, if we have a sequence of clamps [A_i, B_i], the result
 * of applying them sequentially is equivalent to a single clamp [L, R].
 * 
 * Let the current range be [L, R]. Initially, for X in (-inf, inf), the range is (-inf, inf).
 * After the first clamp [A1, B1], the range becomes [A1, B1].
 * For subsequent clamps [Ai, Bi], the new range [L', R'] is:
 * L' = clamp(L, Ai, Bi)
 * R' = clamp(R, Ai, Bi)
 * 
 * Since we want to find the maximum possible value of f(X), and f(X) is a 
 * non-decreasing function that maps the entire real line to the interval [L_final, R_final],
 * the maximum value f(X) can take is simply R_final.
 * 
 * Constraints are small (N <= 100, Ai, Bi <= 100), so we can simulate this
 * by tracking the transformation of the interval [L, R].
 */

void solve() {
    int N;
    cin >> N;
    
    // Initialize the range to cover all possible integers.
    // Since constraints are 1 to 100, we can use a sufficiently large range.
    long long L = -200, R = 200;
    
    for (int i = 0; i < N; ++i) {
        long long Ai, Bi;
        cin >> Ai >> Bi;
        
        // Update L: clamp(L, Ai, Bi)
        if (L < Ai) L = Ai;
        else if (L > Bi) L = Bi;
        
        // Update R: clamp(R, Ai, Bi)
        if (R < Ai) R = Ai;
        else if (R > Bi) R = Bi;
    }
    
    // The maximum value f(X) can take is the upper bound of the final range.
    cout << R << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}