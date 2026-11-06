#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let W be the number of wrong submissions.
 * Each wrong submission adds 20 to the penalty and takes 1 minute.
 * After W wrong submissions, the team must make a correct submission at time X.
 * The earliest time the correct submission can be made is M + W (since each wrong
 * submission takes 1 minute and there is a 1-minute wait, but the problem states
 * "The team must then wait at least one minute before making the next submission."
 * If the first wrong submission is at M, the next is at M+1, ..., the W-th is at M+W-1.
 * The correct submission can then be made at M+W.
 * 
 * Total Penalty = P + (W * 20) + (M + W)
 * We need Total Penalty <= 1000
 * P + 20W + M + W <= 1000
 * 21W <= 1000 - P - M
 * W <= (1000 - P - M) / 21
 * 
 * Also, the correct submission time (M + W) must be strictly less than 300.
 * So, M + W < 300 => W < 300 - M.
 * 
 * Therefore, W = max(0, min((1000 - P - M) / 21, 299 - M)).
 */

void solve() {
    long long M, P;
    cin >> M >> P;

    // The maximum penalty allowed is 1000.
    // Penalty = P + 20*W + (M + W) <= 1000
    // 21*W <= 1000 - P - M
    
    long long remaining_penalty = 1000 - P - M;
    
    if (remaining_penalty < 0) {
        cout << 0 << "\n";
        return;
    }
    
    long long max_w_by_penalty = remaining_penalty / 21;
    
    // Constraint: Correct submission must be at time X < 300.
    // The earliest time for correct submission after W wrong ones is M + W.
    // M + W <= 299  =>  W <= 299 - M
    long long max_w_by_time = 299 - M;
    
    if (max_w_by_time < 0) {
        cout << 0 << "\n";
    } else {
        cout << min(max_w_by_penalty, max_w_by_time) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}