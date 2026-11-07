#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Tortoise time: T_tortoise = ceil(L / V1)
 * Since V1 is an integer and L is an integer, ceil(L/V1) is equivalent to (L + V1 - 1) / V1 using integer division.
 * 
 * Hare time: Let 'w' be the integer wait time.
 * Hare starts at time 'w'. Hare finishes at time 'w + L/V2'.
 * The reported time is ceil(w + L/V2).
 * 
 * Condition to win: ceil(w + L/V2) < ceil(L / V1)
 * Let T_tortoise_reported = (L + V1 - 1) / V1.
 * We need: ceil(w + L/V2) < T_tortoise_reported.
 * Since w is an integer, ceil(w + L/V2) = w + ceil(L/V2).
 * Let T_hare_run = (L + V2 - 1) / V2.
 * Condition: w + T_hare_run < T_tortoise_reported.
 * w < T_tortoise_reported - T_hare_run.
 * 
 * Since w must be an integer >= 0, the maximum w is (T_tortoise_reported - T_hare_run - 1).
 * If this value is < 0, the hare cannot win, so output -1.
 */

void solve() {
    long long L, V1, V2;
    cin >> L >> V1 >> V2;

    // Calculate tortoise's reported time: ceil(L / V1)
    long long t_tortoise = (L + V1 - 1) / V1;

    // Calculate hare's running time: ceil(L / V2)
    long long t_hare_run = (L + V2 - 1) / V2;

    // We need w + t_hare_run < t_tortoise
    // w < t_tortoise - t_hare_run
    // Max integer w = t_tortoise - t_hare_run - 1
    long long max_w = t_tortoise - t_hare_run - 1;

    if (max_w < 0) {
        cout << -1 << "\n";
    } else {
        cout << max_w << "\n";
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