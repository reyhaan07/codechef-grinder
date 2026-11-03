#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Buying New Tablet
 * Approach:
 * 1. Iterate through each test case.
 * 2. For each tablet, check if its price P_i is less than or equal to the budget B.
 * 3. If it is affordable, calculate the area (W_i * H_i).
 * 4. Keep track of the maximum area found among all affordable tablets.
 * 5. If no tablet is affordable, output "no tablet".
 * 
 * Time Complexity: O(T * N)
 * Space Complexity: O(1)
 */

void solve() {
    int N;
    long long B;
    cin >> N >> B;

    long long max_area = -1;
    bool found = false;

    for (int i = 0; i < N; ++i) {
        long long W, H, P;
        cin >> W >> H >> P;

        if (P <= B) {
            long long current_area = W * H;
            if (current_area > max_area) {
                max_area = current_area;
            }
            found = true;
        }
    }

    if (!found) {
        cout << "no tablet" << "\n";
    } else {
        cout << max_area << "\n";
    }
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