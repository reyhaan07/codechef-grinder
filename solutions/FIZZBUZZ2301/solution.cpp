#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Fan Poll (FIZZBUZZ2301)
 * Logic: Dhoni wins if A > B and A > C.
 * Since the problem guarantees no two players received the same number of votes,
 * we simply check if A is strictly greater than both B and C.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single line of input per test case,
    // but standard competitive programming practice often involves a single test case
    // unless specified otherwise. Based on the input format provided:
    long long A, B, C;
    if (cin >> A >> B >> C) {
        if (A > B && A > C) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}