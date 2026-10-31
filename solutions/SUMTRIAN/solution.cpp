#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Sums in a Triangle
 * Approach: Dynamic Programming
 * We can solve this by working backwards from the second-to-last row to the top.
 * For each element at (i, j), the maximum path sum starting from this position
 * is the value at (i, j) plus the maximum of the path sums starting from 
 * (i+1, j) and (i+1, j+1).
 * 
 * Time Complexity: O(N^2) per test case, where N is the number of rows.
 * Space Complexity: O(N^2) to store the triangle.
 */

void solve() {
    int N;
    if (!(cin >> N)) return;

    vector<vector<int>> triangle(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> triangle[i][j];
        }
    }

    // Start from the second to last row and move upwards
    for (int i = N - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            // The value at (i, j) is updated to be the max path sum
            // from this point to the bottom.
            triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }

    // The result is stored at the top of the triangle
    cout << triangle[0][0] << "\n";
}

int main() {
    // Fast I/O for large input/output data
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}