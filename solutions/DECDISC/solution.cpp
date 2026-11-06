#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to buy exactly two vases at indices i and j (i != j).
 * If we buy vase i, and then vase j, the cost is:
 * - If j = i + 1: Cost = A[i] + A[j]/2
 * - If j != i + 1: Cost = A[i] + A[j]
 * 
 * Since N is small (up to 100), we can iterate through all possible pairs (i, j)
 * where 0 <= i < j < N and calculate the cost for each pair, keeping track
 * of the minimum.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long min_cost = -1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;

            long long current_cost = 0;
            if (j == i + 1) {
                // Buying vase i first makes vase i+1 half price
                current_cost = A[i] + (A[j] / 2);
            } else {
                // No discount applies
                current_cost = A[i] + A[j];
            }

            if (min_cost == -1 || current_cost < min_cost) {
                min_cost = current_cost;
            }
        }
    }

    cout << min_cost << "\n";
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