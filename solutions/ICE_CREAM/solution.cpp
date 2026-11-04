#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to buy 2 ice creams, each costing X.
 * Total cost = 2 * X.
 * Chef has Y dollars.
 * Chef can buy the ice creams if Y >= 2 * X.
 * 
 * Constraints: 1 <= X, Y <= 100.
 * Since the values are small, standard 'int' is sufficient, 
 * but 'long long' is used for safety against potential overflow in larger variants.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description does not explicitly state multiple test cases,
    // but the instructions mention "Handle multiple test cases (e.g. int t; cin >> t; while(t--))".
    // Given the input format description "The only line of input will contain 2 space-separated integers",
    // we will read X and Y directly.
    
    long long X, Y;
    if (cin >> X >> Y) {
        if (Y >= 2 * X) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}