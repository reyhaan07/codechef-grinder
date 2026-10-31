#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef and Parole
 * Logic: Chef needs at least 7 days to be released.
 * If X >= 7, output "Yes", otherwise "No".
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (!(cin >> X)) return 0;

    // Check if Chef spent at least 7 days
    if (X >= 7) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}