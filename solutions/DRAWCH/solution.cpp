#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total matches = N
 * Matches played = M
 * Matches remaining = R = N - M
 * 
 * Let A be the number of matches Alice has won so far.
 * Let B be the number of matches Bob has won so far.
 * A + B = M
 * 
 * Let 'a' be the number of matches Alice wins in the remaining R matches.
 * Let 'b' be the number of matches Bob wins in the remaining R matches.
 * a + b = R
 * 
 * For a tie, the total wins for Alice must equal the total wins for Bob:
 * A + a = B + b
 * Since b = R - a:
 * A + a = B + (R - a)
 * 2a = B - A + R
 * 
 * For a tie to be possible:
 * 1. (B - A + R) must be even (so 'a' is an integer).
 * 2. 0 <= a <= R (the number of wins must be non-negative and not exceed remaining matches).
 * 
 * Substituting B = M - A:
 * 2a = (M - A) - A + R
 * 2a = M - 2A + R
 * Since M + R = N:
 * 2a = N - 2A
 * a = (N / 2) - A
 * 
 * This implies that for a tie to occur, N must be even (if N is odd, 
 * total wins A+a and B+b cannot be equal as their sum is N).
 * If N is even, we need to check if we can pick 'a' such that 0 <= a <= R.
 */

void solve() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;

    int A = 0;
    for (char c : S) {
        if (c == '1') A++;
    }
    int B = M - A;
    int R = N - M;

    // A tie is only possible if the total number of matches N is even.
    // If N is odd, one player will always have more wins than the other.
    if (N % 2 != 0) {
        cout << "No" << "\n";
        return;
    }

    // Target wins for each player is N / 2.
    // Alice needs (N/2 - A) more wins.
    // Bob needs (N/2 - B) more wins.
    int needed_a = (N / 2) - A;
    int needed_b = (N / 2) - B;

    // We need to be able to distribute the R remaining matches such that
    // Alice gets exactly needed_a wins and Bob gets exactly needed_b wins.
    // This is possible if and only if:
    // 1. needed_a >= 0 and needed_b >= 0
    // 2. needed_a + needed_b == R
    if (needed_a >= 0 && needed_b >= 0 && (needed_a + needed_b == R)) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}