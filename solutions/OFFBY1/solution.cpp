#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: OFFBY1
 * The problem asks us to calculate A + B and append a '1' to the end of the result.
 * Since A and B are at most 50, A + B is at most 100.
 * Appending '1' to 100 results in 1001, which fits easily into an integer.
 * We can achieve this by calculating (A + B) * 10 + 1.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    // The problem description implies a single test case per run based on the input format.
    // If multiple test cases were required, a loop would be used.
    if (cin >> A >> B) {
        int sum = A + B;
        // To append '1' to the end of the number, we multiply by 10 and add 1.
        int result = sum * 10 + 1;
        cout << result << "\n";
    }

    return 0;
}