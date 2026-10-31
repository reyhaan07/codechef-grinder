#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let N be the length of the array.
 * Let P be the count of 1s and M be the count of -1s.
 * The sum of the array is S = P - M.
 * We want the final sum to be 0.
 * Let x be the number of 1s changed to -1s, and y be the number of -1s changed to 1s.
 * New sum = (P - x + y) - (M - y + x) = 0
 * P - M - 2x + 2y = 0
 * P - M = 2(x - y)
 * 
 * Since P + M = N, we have M = N - P.
 * P - (N - P) = 2(x - y)
 * 2P - N = 2(x - y)
 * 
 * For this to be possible, (2P - N) must be divisible by 2, which means N must be even.
 * If N is odd, it is impossible to have a sum of 0, so output -1.
 * 
 * If N is even, we need the final count of 1s to be N/2.
 * Current count of 1s is P.
 * If P > N/2, we need to flip (P - N/2) ones to -1s.
 * If P < N/2, we need to flip (N/2 - P) minus ones to 1s.
 * In both cases, the number of operations is |P - N/2|.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    int P = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] == 1) {
            P++;
        }
    }

    // If N is odd, sum can never be 0
    if (N % 2 != 0) {
        cout << -1 << "\n";
        return;
    }

    // Target count of 1s is N/2
    int target = N / 2;
    cout << abs(P - target) << "\n";
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