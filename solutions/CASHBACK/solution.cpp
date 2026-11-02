#include <iostream>

using namespace std;

/**
 * Problem Analysis:
 * The customer pays X rupees.
 * If X >= 200, the effective price is X - 50.
 * If X < 200, the effective price is X.
 * 
 * Constraints: 100 <= X <= 500.
 * The input format specifies a single integer X, not multiple test cases.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (cin >> X) {
        if (X >= 200) {
            cout << (X - 50) << endl;
        } else {
            cout << X << endl;
        }
    }
    
    return 0;
}