#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Algomaniac Finals
 * The finals are held on March 17.
 * We need to check if the input day X is equal to 17.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer input X.
    // Although the prompt mentions "Handle multiple test cases", 
    // the problem description only specifies one integer X.
    // We will read X and compare it to 17.
    
    int X;
    if (cin >> X) {
        if (X == 17) {
            cout << "YAY" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}