#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Practice makes us perfect
 * The task is to count how many weeks out of 4 the Chef solved at least 10 problems.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem provides 4 integers representing problems solved in 4 weeks.
    // We read them and count how many are >= 10.
    int p1, p2, p3, p4;
    if (!(cin >> p1 >> p2 >> p3 >> p4)) return 0;

    int count = 0;
    if (p1 >= 10) count++;
    if (p2 >= 10) count++;
    if (p3 >= 10) count++;
    if (p4 >= 10) count++;

    cout << count << "\n";

    return 0;
}