#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Sum OR Difference
 * Logic:
 * If N1 > N2, print N1 - N2.
 * Otherwise, print N1 + N2.
 * Constraints are small (-1000 to 1000), so standard int is sufficient,
 * but long long is used for safety as per instructions.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n1, n2;
    
    // The problem description implies reading two numbers.
    // If the problem had multiple test cases, we would wrap this in a loop.
    // Based on the provided format, we read the two integers.
    if (cin >> n1 >> n2) {
        if (n1 > n2) {
            cout << (n1 - n2) << "\n";
        } else {
            cout << (n1 + n2) << "\n";
        }
    }

    return 0;
}