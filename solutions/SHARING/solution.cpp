#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice has A cookies, Bob has B cookies. A > B.
 * Let x be the number of cookies Alice gives to Bob.
 * After the transfer:
 * Alice has A - x
 * Bob has B + x
 * For them to be equal: A - x = B + x
 * 2x = A - B
 * x = (A - B) / 2
 * 
 * For x to be a valid number of cookies (an integer), (A - B) must be even.
 * Also, x must be positive (since A > B, A - B > 0, so x > 0).
 * Additionally, Alice must have enough cookies to give, i.e., A - x >= 0.
 * Since x = (A - B) / 2, A - x = A - (A - B)/2 = (2A - A + B) / 2 = (A + B) / 2.
 * Since A > B, (A + B) / 2 is always positive.
 * 
 * Thus, the condition is simply: (A - B) % 2 == 0.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B;
    // The problem description implies a single test case based on the format,
    // but standard competitive programming practice often involves multiple test cases.
    // Given the constraints and description, we read A and B.
    if (!(cin >> A >> B)) return 0;

    long long diff = A - B;

    // Check if the difference is even
    if (diff % 2 == 0) {
        cout << (diff / 2) << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}