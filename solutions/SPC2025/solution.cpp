#include <iostream>

using namespace std;

/**
 * Problem Analysis:
 * Ved is a NEWBIE if M >= N / 2.0.
 * To avoid floating point issues, we can rewrite the condition:
 * M >= N / 2.0  <=>  2 * M >= N
 * 
 * Note: The problem does not specify multiple test cases. 
 * The input format consists of a single line with N and M.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (cin >> n >> m) {
        // Condition: If errors are present in at least half of the total lines (M >= N/2)
        // Using 2 * M >= N to handle the division by 2 logic using integer arithmetic.
        // Example: N=9, M=4. 2*4 = 8. 8 >= 9 is false -> PRO. Correct.
        // Example: N=10, M=6. 2*6 = 12. 12 >= 10 is true -> NEWBIE. Correct.
        if (2 * m >= n) {
            cout << "NEWBIE" << endl;
        } else {
            cout << "PRO" << endl;
        }
    }

    return 0;
}