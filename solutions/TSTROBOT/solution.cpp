#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The robot starts at position X.
 * It executes N commands.
 * We need to count the number of distinct integer coordinates visited.
 * Since N is small (up to 100), we can track all visited coordinates using a set.
 * The set will automatically handle duplicates, and the size of the set will be our answer.
 * 
 * Time Complexity: O(N log N) per test case due to set insertions.
 * Space Complexity: O(N) to store the visited coordinates.
 */

void solve() {
    int N;
    long long X;
    cin >> N >> X;
    string S;
    cin >> S;

    // Use a set to store unique visited coordinates
    set<long long> visited;
    
    // The starting position is always visited
    long long current_pos = X;
    visited.insert(current_pos);

    // Process each command
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'L') {
            current_pos--;
        } else if (S[i] == 'R') {
            current_pos++;
        }
        visited.insert(current_pos);
    }

    // The number of distinct points is the size of the set
    cout << visited.size() << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}