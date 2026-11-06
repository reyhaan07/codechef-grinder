#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To form the maximum number from three digits, we should sort the digits 
 * in descending order. For example, if rolls are 3, 2, 5, the maximum 
 * number is 532.
 * 
 * Algorithm:
 * 1. Read the three dice rolls for Alice and Bob.
 * 2. Sort Alice's rolls in descending order to form her maximum number.
 * 3. Sort Bob's rolls in descending order to form his maximum number.
 * 4. Compare the two numbers.
 * 5. Since we are comparing 3-digit numbers, we can compare them digit by digit
 *    or simply construct the integer value (e.g., 5*100 + 3*10 + 2).
 */

void solve() {
    vector<int> a(3), b(3);
    for (int i = 0; i < 3; ++i) cin >> a[i];
    for (int i = 0; i < 3; ++i) cin >> b[i];

    // Sort in descending order to get the largest possible number
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    // Compare the numbers formed by the sorted digits
    int alice_score = a[0] * 100 + a[1] * 10 + a[2];
    int bob_score = b[0] * 100 + b[1] * 10 + b[2];

    if (alice_score > bob_score) {
        cout << "Alice" << "\n";
    } else if (bob_score > alice_score) {
        cout << "Bob" << "\n";
    } else {
        cout << "Tie" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}