#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to maximize the total sum of coins.
 * He has N opponents. For each opponent i, he can either win (get A_i) or lose (get B_i).
 * Constraint: He must lose at least once.
 * 
 * Strategy:
 * 1. Calculate the sum if Chef wins every match: Total = sum(A_i).
 * 2. To satisfy the constraint of losing at least once, he must change one win to a loss.
 * 3. Changing a win to a loss for opponent i results in a loss of (A_i - B_i) coins.
 * 4. To maximize the total, we want to minimize the loss (A_i - B_i).
 * 5. Therefore, we find the minimum difference (A_i - B_i) among all i, and subtract 
 *    that from the total sum of all A_i.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the arrays.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];

    long long total_sum = 0;
    long long min_diff = -1;

    for (int i = 0; i < N; ++i) {
        total_sum += A[i];
        long long diff = A[i] - B[i];
        if (min_diff == -1 || diff < min_diff) {
            min_diff = diff;
        }
    }

    // The result is the sum of all wins minus the smallest penalty incurred by losing once.
    cout << (total_sum - min_diff) << "\n";
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