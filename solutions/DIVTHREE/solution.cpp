#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - We have N setters, each with A_i problems.
 * - Total problems available = sum(A_i).
 * - Each contest requires K problems.
 * - Max contests possible based on problems = total_problems / K.
 * - Max contests possible based on time = D.
 * - Since we can host at most one contest per day, the answer is min(total_problems / K, D).
 * 
 * Constraints:
 * - N <= 100
 * - K, D <= 10^9
 * - A_i <= 10^7
 * - Total problems can be up to 100 * 10^7 = 10^9, which fits in a 32-bit signed integer,
 *   but using long long is safer to prevent overflow during summation.
 */

void solve() {
    int N;
    long long K, D;
    cin >> N >> K >> D;

    long long total_problems = 0;
    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        total_problems += a;
    }

    // Calculate max contests possible based on available problems
    long long max_contests_by_problems = total_problems / K;

    // The answer is the minimum of the contests we can host with problems 
    // and the number of days available.
    long long result = min(max_contests_by_problems, D);

    cout << result << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}