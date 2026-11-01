#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Alice starts as the server.
 * - If the current server wins the point, their score increases by 1, and they remain the server.
 * - If the receiver wins the point, their score does not increase, but they become the server.
 * 
 * We maintain a variable 'server' (0 for Alice, 1 for Bob).
 * For each character in the string:
 * - If char is 'A':
 *     - If server == 0 (Alice), Alice's score increases.
 *     - If server == 1 (Bob), Bob loses the serve, Alice becomes the server.
 * - If char is 'B':
 *     - If server == 1 (Bob), Bob's score increases.
 *     - If server == 0 (Alice), Alice loses the serve, Bob becomes the server.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the string, or O(1) if processed character by character.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    long long alice_score = 0;
    long long bob_score = 0;
    
    // 0 represents Alice is server, 1 represents Bob is server
    int current_server = 0; 

    for (char winner : S) {
        if (winner == 'A') {
            if (current_server == 0) {
                // Alice is server and wins
                alice_score++;
            } else {
                // Bob was server, Alice wins point, Alice becomes server
                current_server = 0;
            }
        } else { // winner == 'B'
            if (current_server == 1) {
                // Bob is server and wins
                bob_score++;
            } else {
                // Alice was server, Bob wins point, Bob becomes server
                current_server = 1;
            }
        }
    }

    cout << alice_score << " " << bob_score << "\n";
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