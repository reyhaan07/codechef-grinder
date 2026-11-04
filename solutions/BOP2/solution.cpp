#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N friends, each providing a color C_i.
 * We want to order these colors such that the number of "jolts" is minimized.
 * A jolt occurs when the color changes.
 * 
 * Let the sequence of colors be S_1, S_2, ..., S_N.
 * - Initial state: None.
 * - First visit: S_1. Since it changes from None to S_1, this is always 1 jolt.
 * - Subsequent visits: S_i. If S_i != S_{i-1}, we get a jolt.
 * 
 * To minimize jolts, we should group all identical colors together.
 * For example, if we have colors {1, 2, 1, 3, 2}, we can arrange them as:
 * {1, 1, 2, 2, 3}.
 * The sequence of colors becomes: 1, 1, 2, 2, 3.
 * Jolts:
 * - None -> 1 (Jolt)
 * - 1 -> 1 (No)
 * - 1 -> 2 (Jolt)
 * - 2 -> 2 (No)
 * - 2 -> 3 (Jolt)
 * Total = 3.
 * 
 * In general, if we have K distinct colors present in the input, we can arrange
 * all instances of color_1, then all instances of color_2, ..., then all instances of color_K.
 * The number of jolts will be exactly K.
 * 
 * Proof:
 * 1. The first color group contributes 1 jolt (None -> color_1).
 * 2. Each transition between different color groups contributes 1 jolt.
 * 3. There are K-1 transitions between K distinct color groups.
 * 4. Total = 1 + (K - 1) = K.
 * 
 * Since we must visit every friend, we must use every color at least once.
 * Thus, we cannot have fewer than K distinct colors.
 */

void solve() {
    int N;
    cin >> N;
    set<int> distinct_colors;
    for (int i = 0; i < N; ++i) {
        int c;
        cin >> c;
        distinct_colors.insert(c);
    }
    
    // The minimum number of jolts is simply the number of unique colors.
    cout << distinct_colors.size() << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}