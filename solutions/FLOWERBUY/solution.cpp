#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to represent N as 2*x + 3*y = N, where x and y are non-negative integers.
 * We want to minimize the cost C = 4*x + 5*y.
 * 
 * Since N is small (up to 100), we can iterate through all possible values of y
 * such that 3*y <= N. For each y, we check if (N - 3*y) is divisible by 2.
 * If it is, we calculate the cost and keep track of the minimum.
 */

void solve() {
    int N;
    cin >> N;

    long long min_cost = -1;

    // Iterate through possible number of 3-flower transactions (y)
    for (int y = 0; y * 3 <= N; ++y) {
        int remaining = N - (y * 3);
        
        // Check if the remaining flowers can be bought in 2-flower transactions
        if (remaining % 2 == 0) {
            int x = remaining / 2;
            long long current_cost = (long long)x * 4 + (long long)y * 5;
            
            if (min_cost == -1 || current_cost < min_cost) {
                min_cost = current_cost;
            }
        }
    }

    cout << min_cost << "\n";
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