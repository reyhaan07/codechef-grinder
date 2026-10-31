#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each player rolls 3 dice. The score is the sum of the two highest rolls.
 * To find the sum of the two highest rolls, we can sum all three rolls and subtract the smallest roll.
 * Alternatively, sort the three rolls and take the sum of the last two.
 * 
 * Constraints:
 * T <= 10^4
 * Dice values are between 1 and 6.
 * Time complexity per test case: O(1) (sorting 3 elements is constant time).
 * Total time complexity: O(T).
 */

void solve() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    // Calculate Alice's score
    vector<int> alice = {a1, a2, a3};
    sort(alice.begin(), alice.end());
    int alice_score = alice[1] + alice[2];

    // Calculate Bob's score
    vector<int> bob = {b1, b2, b3};
    sort(bob.begin(), bob.end());
    int bob_score = bob[1] + bob[2];

    // Determine the winner
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}