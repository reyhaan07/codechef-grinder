#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has score X and N opponents with scores A_i.
 * Rank = (Number of A_i > X) + 1.
 * Sabotage: Choose index i, set A_i = 0, X = X + 100.
 * Can perform at most K sabotages.
 * 
 * Strategy:
 * To minimize rank, we want to minimize the count of A_i > X.
 * Each sabotage operation does two things:
 * 1. Removes an opponent from the "greater than X" set (by setting A_i = 0).
 * 2. Increases X, which might remove additional opponents from the "greater than X" set.
 * 
 * Since we want to minimize the rank, we should always prioritize sabotaging 
 * the opponents who currently have the highest scores. This is because 
 * setting a high score to 0 is always better or equal to setting a low score to 0,
 * and increasing X helps reduce the count of remaining opponents.
 * 
 * Algorithm:
 * 1. Sort A in descending order.
 * 2. Try all possible number of sabotages 's' from 0 to K.
 * 3. For a fixed 's':
 *    - The first 's' opponents (the ones with the highest scores) are set to 0.
 *    - Chef's new score becomes X + s * 100.
 *    - Count how many of the remaining (N - s) opponents have scores > (X + s * 100).
 *    - Rank = count + 1.
 * 4. The answer is the minimum rank found across all s in [0, K].
 */

void solve() {
    int N;
    long long X, K;
    cin >> N >> X >> K;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Sort descending to easily pick the highest scores to sabotage
    sort(A.begin(), A.end(), greater<long long>());

    int min_rank = N + 1;

    // Try performing 's' sabotages, where 0 <= s <= K
    for (int s = 0; s <= K; ++s) {
        long long current_X = X + (long long)s * 100;
        int count = 0;
        
        // After s sabotages, the first s elements are 0 (which are <= current_X)
        // We only need to check the remaining N - s elements
        for (int i = s; i < N; ++i) {
            if (A[i] > current_X) {
                count++;
            }
        }
        
        int current_rank = count + 1;
        if (current_rank < min_rank) {
            min_rank = current_rank;
        }
    }

    cout << min_rank << "\n";
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