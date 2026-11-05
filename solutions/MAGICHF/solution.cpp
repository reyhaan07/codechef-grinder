#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N boxes, and a coin starts at position X.
 * There are S swaps. Each swap involves two indices A and B.
 * If the coin is currently at position A, it moves to B.
 * If the coin is currently at position B, it moves to A.
 * If the coin is at neither, it stays where it is.
 * 
 * Since we only care about the position of the coin, we don't need to track
 * all N boxes. We only need to track the current position of the coin.
 * 
 * Time Complexity: O(S) per test case, where S is the number of swaps.
 * Total time complexity: O(sum of S), which is 2*10^5, well within the 0.5s limit.
 * Space Complexity: O(1) auxiliary space.
 */

void solve() {
    int N, X, S;
    if (!(cin >> N >> X >> S)) return;

    int current_pos = X;
    for (int i = 0; i < S; ++i) {
        int A, B;
        cin >> A >> B;
        
        // If the coin is in one of the swapped boxes, update its position
        if (current_pos == A) {
            current_pos = B;
        } else if (current_pos == B) {
            current_pos = A;
        }
    }
    
    cout << current_pos << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}