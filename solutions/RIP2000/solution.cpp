#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N notes of Rs. 2000.
 * Total amount = N * 2000.
 * Chef wants to pay the same amount using Rs. 500 notes.
 * Let X be the number of Rs. 500 notes.
 * X * 500 = N * 2000
 * X = (N * 2000) / 500
 * X = N * 4
 * 
 * Constraints: 1 <= N <= 100.
 * The result will be at most 400, which fits in a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer N per test case.
    // Although the problem statement doesn't explicitly mention 't' test cases,
    // standard competitive programming practice for this format is to handle N.
    // Given the constraints and format, we read N.
    int N;
    if (cin >> N) {
        long long result = (long long)N * 4;
        cout << result << "\n";
    }

    return 0;
}