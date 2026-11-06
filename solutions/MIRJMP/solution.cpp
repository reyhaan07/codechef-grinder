#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N points [1, N]. Start at K, target N.
 * Moves:
 * 1. X -> X-1 (if X > 1)
 * 2. X -> X+1 (if X < N)
 * 3. X -> N + 1 - X
 * 
 * Since N is very small (N <= 20), this is a shortest path problem on a graph
 * with N nodes (1 to N). We can use Breadth-First Search (BFS) to find the 
 * minimum number of moves.
 */

void solve() {
    int N, K;
    cin >> N >> K;

    if (K == N) {
        cout << 0 << "\n";
        return;
    }

    // dist[i] stores the minimum moves to reach point i
    vector<int> dist(N + 1, -1);
    queue<int> q;

    q.push(K);
    dist[K] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (curr == N) {
            cout << dist[curr] << "\n";
            return;
        }

        // Possible moves
        int next_moves[3];
        next_moves[0] = curr - 1;
        next_moves[1] = curr + 1;
        next_moves[2] = N + 1 - curr;

        for (int next : next_moves) {
            if (next >= 1 && next <= N && dist[next] == -1) {
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }
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