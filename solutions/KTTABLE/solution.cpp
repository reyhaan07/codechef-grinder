#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - N students, each has a time window to cook.
 * - Student 1: starts at 0, must finish by A1. Time available: A1 - 0 = A1.
 * - Student i (i > 1): starts at A_{i-1}, must finish by A_i. Time available: A_i - A_{i-1}.
 * - Student i needs B_i time.
 * - Condition to succeed: B_i <= (Time available).
 * - Constraints: N up to 10^4, T up to 10. Time values up to 10^9.
 * - Use long long to prevent overflow during calculations, although A_i - A_{i-1} fits in int, 
 *   it is safer to use long long for time calculations.
 */

void solve() {
    int N;
    if (!(cin >> N)) return;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<long long> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int count = 0;
    long long prev_time = 0;

    for (int i = 0; i < N; ++i) {
        long long available_time = A[i] - prev_time;
        if (B[i] <= available_time) {
            count++;
        }
        prev_time = A[i];
    }

    cout << count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}