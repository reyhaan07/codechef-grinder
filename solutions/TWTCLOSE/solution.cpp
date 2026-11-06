#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Closing the Tweets
 * Approach:
 * We maintain an array (or vector) of size N+1 to keep track of the state of each tweet.
 * 0 represents closed, 1 represents open.
 * We also maintain a counter 'open_count' to keep track of the total number of open tweets.
 * 
 * For each command:
 * - CLICK X: Toggle the state of tweet X. If it was 0, it becomes 1 (increment count).
 *            If it was 1, it becomes 0 (decrement count).
 * - CLOSEALL: Reset all tweet states to 0 and set open_count to 0.
 * 
 * Time Complexity: O(K) per test case, where K is the number of clicks.
 * Space Complexity: O(N) to store the state of N tweets.
 */

void solve() {
    int N, K;
    if (!(cin >> N >> K)) return;

    // tweets[i] stores the state of tweet i (0 = closed, 1 = open)
    vector<int> tweets(N + 1, 0);
    int open_count = 0;

    for (int i = 0; i < K; ++i) {
        string command;
        cin >> command;

        if (command == "CLICK") {
            int x;
            cin >> x;
            if (tweets[x] == 0) {
                tweets[x] = 1;
                open_count++;
            } else {
                tweets[x] = 0;
                open_count--;
            }
        } else if (command == "CLOSEALL") {
            // Reset all tweets to closed
            fill(tweets.begin(), tweets.end(), 0);
            open_count = 0;
        }
        cout << open_count << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description does not explicitly state multiple test cases,
    // but standard competitive programming practice suggests handling them if implied.
    // Given the constraints and format, we solve for the single test case provided.
    solve();

    return 0;
}