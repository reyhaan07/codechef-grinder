#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is happy if the bus is not full.
 * The bus is full if the number of students (N) equals the number of seats (M).
 * The bus is not full if N < M.
 * 
 * Constraints:
 * 1 <= N <= M <= 10
 * Since N <= M is guaranteed, we only need to check if N < M.
 * If N < M, output YES.
 * If N == M, output NO.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the input format,
    // but standard competitive programming practice suggests handling it robustly.
    // Given the constraints and format:
    int N, M;
    if (cin >> N >> M) {
        if (N < M) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}