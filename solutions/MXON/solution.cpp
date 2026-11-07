#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The operation S[i] = max(S[i], S[i+1]) effectively propagates a '1' from right to left.
 * If we have a '1' at index j, we can move this '1' to any index i < j using (j - i) operations.
 * Specifically, if we have a '1' at index j, we can make all indices from i to j equal to '1'
 * using at most (j - i) operations.
 * 
 * Given N is very small (N <= 10), we can use Breadth-First Search (BFS) or simply 
 * observe that the state space is 2^N. Since N <= 10, 2^10 = 1024, which is very small.
 * We can perform a BFS to find the maximum number of 1s reachable within K operations.
 */

void solve() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    // Map to store the minimum operations to reach a specific string state
    unordered_map<string, int> dist;
    queue<string> q;

    q.push(S);
    dist[S] = 0;

    int max_ones = 0;
    for (char c : S) if (c == '1') max_ones++;

    while (!q.empty()) {
        string curr = q.front();
        q.pop();

        int d = dist[curr];
        
        int current_ones = 0;
        for (char c : curr) if (c == '1') current_ones++;
        max_ones = max(max_ones, current_ones);

        if (d < K) {
            for (int i = 0; i < N - 1; ++i) {
                string next_s = curr;
                if (next_s[i+1] == '1' && next_s[i] == '0') {
                    next_s[i] = '1';
                    if (dist.find(next_s) == dist.end()) {
                        dist[next_s] = d + 1;
                        q.push(next_s);
                    }
                }
            }
        }
    }

    cout << max_ones << "\n";
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