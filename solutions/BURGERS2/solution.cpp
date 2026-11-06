#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let n_normal be the number of normal burgers and n_premium be the number of premium burgers.
 * We have two equations:
 * 1) n_normal + n_premium = N
 * 2) X * n_normal + Y * n_premium <= R
 * 
 * Substituting n_normal = N - n_premium into the second equation:
 * X * (N - n_premium) + Y * n_premium <= R
 * X * N - X * n_premium + Y * n_premium <= R
 * n_premium * (Y - X) <= R - X * N
 * 
 * Since Y > X, (Y - X) is positive.
 * n_premium <= (R - X * N) / (Y - X)
 * 
 * Also, we must satisfy:
 * 0 <= n_premium <= N
 * 
 * To maximize n_premium, we take the largest integer n_premium such that:
 * n_premium = min(N, floor((R - X * N) / (Y - X)))
 * 
 * If R < X * N, it is impossible to buy N burgers even if all are normal, so output -1.
 * If the calculated n_premium < 0, it is impossible, so output -1.
 */

void solve() {
    long long X, Y, N, R;
    cin >> X >> Y >> N >> R;

    // If the cost of N normal burgers is already greater than R, impossible.
    if (X * N > R) {
        cout << -1 << "\n";
        return;
    }

    // Calculate max possible premium burgers
    // n_premium * (Y - X) <= R - X * N
    long long max_premium = (R - X * N) / (Y - X);

    // We want to maximize premium, but it cannot exceed N
    long long n_premium = min(N, max_premium);
    long long n_normal = N - n_premium;

    // Final check: if n_normal is negative, it means even with 0 premium, 
    // we couldn't afford N burgers (already handled by X*N > R)
    if (n_normal < 0) {
        cout << -1 << "\n";
    } else {
        cout << n_normal << " " << n_premium << "\n";
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