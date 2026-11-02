#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Problem Analysis:
 * Scheme 1: 100 + 4 * X
 * Scheme 2: 300
 * We need to find min(100 + 4 * X, 300).
 * 
 * Correction: The problem input consists of a single integer X, 
 * not a number of test cases T.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (cin >> X) {
        int scheme1 = 100 + (4 * X);
        int scheme2 = 300;

        // Output the minimum of the two schemes
        cout << min(scheme1, scheme2) << endl;
    }

    return 0;
}