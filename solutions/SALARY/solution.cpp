#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N workers with salaries W_i.
 * An operation consists of choosing one worker and increasing everyone else's salary by 1.
 * This is equivalent to saying: the chosen worker's salary remains the same, 
 * while everyone else's salary increases by 1.
 * 
 * Let the target equal salary be S. Since we can only increase salaries, 
 * S must be at least the maximum salary currently in the array.
 * However, notice that increasing everyone except one worker by 1 is equivalent 
 * to decreasing that one worker's salary relative to the others.
 * 
 * Let the sum of all salaries be Sum and the minimum salary be Min.
 * In each operation, we increase N-1 workers by 1.
 * After K operations, the total sum of salaries increases by K * (N - 1).
 * If all workers reach a final salary S, the new sum will be N * S.
 * 
 * Actually, there is a simpler observation:
 * Increasing everyone except worker i by 1 is equivalent to decreasing worker i 
 * by 1 relative to the others. To make all salaries equal to the minimum salary 
 * is impossible (since we only increase), but we can make all salaries equal to 
 * the current maximum salary.
 * 
 * The total number of operations required to make all salaries equal to the 
 * maximum value is: Sum(W_i - Min_W).
 * Why? Because each operation effectively reduces the difference between 
 * the current salary and the target salary for the "chosen" worker.
 * Specifically, to bring all W_i to the level of the maximum salary, 
 * each worker i needs (Max - W_i) operations where they are the "chosen" one.
 */

void solve() {
    int n;
    cin >> n;
    vector<long long> w(n);
    long long min_val = 10001;
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> w[i];
        if (w[i] < min_val) {
            min_val = w[i];
        }
        sum += w[i];
    }

    // The total number of operations is the sum of differences 
    // between each salary and the minimum salary.
    // Total operations = Sum(W_i - min_val) = Sum(W_i) - N * min_val
    long long ans = sum - (long long)n * min_val;
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}