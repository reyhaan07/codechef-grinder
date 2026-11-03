#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers A and B (0 or 1).
 * Logic:
 * 1. If A == 0: User has never submitted on practice page. Output: https://www.codechef.com/practice
 * 2. If A == 1 and B == 0: User has submitted on practice, but not in contest. Output: https://www.codechef.com/contests
 * 3. If A == 1 and B == 1: User has submitted on practice and in contest. Output: https://discuss.codechef.com
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the 
    // sample input format, but the instructions mention handling multiple test cases.
    // We will check if there is a test case count provided or just process the input.
    // Given the standard CodeChef format for this specific problem:
    int A, B;
    if (cin >> A >> B) {
        if (A == 0) {
            cout << "https://www.codechef.com/practice" << "\n";
        } else if (A == 1 && B == 0) {
            cout << "https://www.codechef.com/contests" << "\n";
        } else if (A == 1 && B == 1) {
            cout << "https://discuss.codechef.com" << "\n";
        }
    }

    return 0;
}