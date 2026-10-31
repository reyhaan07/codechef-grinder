#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given 2N integers. We need to split them into two sets of size N,
 * where each set contains only distinct elements.
 * 
 * This is possible if and only if no number appears more than twice in the
 * original array of 2N elements. If any number appears 3 or more times,
 * it is impossible to distribute them into two sets such that each set has
 * distinct elements, because at least one set would have to contain that
 * number at least twice.
 * 
 * Time Complexity: O(N log N) per test case due to sorting, or O(N) using a hash map.
 * Given N <= 1000, O(N log N) is well within the 1.5s time limit.
 */

void solve() {
    int N;
    cin >> N;
    int total_elements = 2 * N;
    vector<long long> A(total_elements);
    for (int i = 0; i < total_elements; ++i) {
        cin >> A[i];
    }

    // Sort the array to easily count occurrences of each element
    sort(A.begin(), A.end());

    bool possible = true;
    // Check if any element appears more than twice
    for (int i = 0; i < total_elements - 2; ++i) {
        if (A[i] == A[i + 1] && A[i + 1] == A[i + 2]) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
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