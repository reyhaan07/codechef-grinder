#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Bhoomi is at position N (1-indexed) with height H[N].
 * She wants to be at a position 'i' such that H[i] > H[j] for all 1 <= j < i.
 * She moves by swapping with the person in front.
 * Effectively, she moves from position N to N-1, N-2, ..., 1.
 * At each step, she checks if her current height is strictly greater than 
 * the maximum height of all students currently in front of her.
 * 
 * Since N is small (up to 100), we can simulate the process.
 * Let the current array be H. Bhoomi is at index 'pos' (initially N-1).
 * While pos > 0:
 *   Check if H[pos] > max(H[0...pos-1]).
 *   If true, she can see, stop.
 *   If false, swap H[pos] and H[pos-1], increment count, decrement pos.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }

    if (N == 1) {
        cout << 0 << "\n";
        return;
    }

    int pos = N - 1;
    int seconds = 0;

    while (pos > 0) {
        // Check if Bhoomi (at H[pos]) is strictly taller than everyone before her
        bool can_see = true;
        for (int i = 0; i < pos; ++i) {
            if (H[i] >= H[pos]) {
                can_see = false;
                break;
            }
        }

        if (can_see) {
            break;
        }

        // Swap with person in front
        swap(H[pos], H[pos - 1]);
        pos--;
        seconds++;
    }

    cout << seconds << "\n";
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