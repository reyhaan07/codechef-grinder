#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to write X pages.
 * He already has Y pages available.
 * He needs (X - Y) more pages. If X <= Y, he needs 0 more pages (he is already set).
 * However, the problem implies he wants to buy a notebook if he needs more pages.
 * If X > Y, he needs a notebook with at least (X - Y) pages.
 * The notebook must cost at most K rubles.
 * 
 * Logic:
 * 1. Calculate pages needed: needed = max(0, X - Y).
 * 2. Iterate through all N notebooks.
 * 3. For each notebook (Pi, Ci):
 *    - Check if Pi >= needed AND Ci <= K.
 *    - If such a notebook exists, Chef is "LuckyChef".
 * 4. If no such notebook is found after checking all, "UnluckyChef".
 * 
 * Complexity:
 * Time: O(N) per test case, total O(Sum of N). Given Sum of N <= 10^6, this is well within 1s.
 * Space: O(1) auxiliary space.
 */

void solve() {
    int X, Y, K, N;
    if (!(cin >> X >> Y >> K >> N)) return;

    int needed = X - Y;
    if (needed < 0) needed = 0;

    bool found = false;
    for (int i = 0; i < N; ++i) {
        int Pi, Ci;
        cin >> Pi >> Ci;
        // Chef can buy the notebook if it has enough pages AND is within budget
        if (Pi >= needed && Ci <= K) {
            found = true;
        }
    }

    if (found) {
        cout << "LuckyChef" << "\n";
    } else {
        cout << "UnluckyChef" << "\n";
    }
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