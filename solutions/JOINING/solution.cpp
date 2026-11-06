#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Candidates join in groups of 5.
 * Candidate i (1-indexed) joins on day: ceil(i / 5).
 * 
 * When candidate K turns down the offer, all candidates from K+1 to N shift down by 1 position.
 * A candidate i (where i > K) now effectively occupies position i-1.
 * Their original joining day was ceil(i / 5).
 * Their new joining day is ceil((i - 1) / 5).
 * 
 * We need to count how many i in the range [K+1, N] satisfy:
 * ceil(i / 5) != ceil((i - 1) / 5).
 * 
 * ceil(x / 5) changes value only when x is a multiple of 5 + 1.
 * Specifically, ceil(i / 5) > ceil((i - 1) / 5) if and only if i is 6, 11, 16, ...
 * i.e., (i - 1) is a multiple of 5.
 * 
 * So we need to count integers i such that K < i <= N and (i - 1) % 5 == 0.
 */

void solve() {
    int N, K;
    cin >> N >> K;

    int count = 0;
    // We check every candidate from K+1 to N
    for (int i = K + 1; i <= N; ++i) {
        int original_day = (i + 4) / 5;
        int new_day = (i - 1 + 4) / 5;
        
        if (original_day != new_day) {
            count++;
        }
    }
    cout << count << "\n";
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