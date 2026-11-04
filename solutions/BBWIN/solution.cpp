#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice needs to reach a score A' such that A' >= B + 10.
 * Let D = (B + 10) - A.
 * If D <= 0, Alice already has a dominant victory, so she needs 0 shots.
 * If D > 0, Alice needs to score at least D points.
 * Since each shot can be worth 2 or 3 points, to minimize the number of shots,
 * she should prioritize 3-point shots.
 * 
 * Let k be the number of shots. We want to find the minimum k such that 
 * 3 * k >= D.
 * If D is divisible by 3, k = D / 3.
 * Otherwise, k = (D / 3) + 1.
 * This is equivalent to ceil(D / 3.0).
 */

void solve() {
    long long A, B;
    cin >> A >> B;

    long long target = B + 10;
    if (A >= target) {
        cout << 0 << "\n";
    } else {
        long long diff = target - A;
        // We need to cover 'diff' points using 3-pointers to minimize shots.
        // Number of shots = ceil(diff / 3)
        long long shots = (diff + 2) / 3;
        cout << shots << "\n";
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