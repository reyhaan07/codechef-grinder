#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are allowed to reverse any substring of length X, where X is a prime number.
 * 
 * Key Insight:
 * 1. If we can reverse a substring of length 2, we can swap any two adjacent elements.
 *    Proof: To swap A[i] and A[i+1], we can use a sequence of operations.
 *    Actually, we don't even need that. Note that if we can reverse a substring of length 2,
 *    we can swap adjacent elements. If we can swap adjacent elements, we can achieve any 
 *    permutation of the string.
 * 2. Can we always swap adjacent elements?
 *    - If we have a prime X=2, we can swap adjacent elements.
 *    - If we have a prime X=3, we can reverse A[i...i+2].
 *    - Even if we only have larger primes, we can swap any two elements.
 *    - Specifically, any permutation can be reached if we can swap adjacent elements.
 *    - With prime lengths, we can swap any two elements because we can effectively move 
 *      elements around.
 * 3. Therefore, the only invariant is the count of '0's and '1's in the string.
 *    If string A has the same number of '0's and '1's as string B, we can transform A to B.
 * 
 * Complexity:
 * Time: O(N) per test case to count the characters.
 * Space: O(N) to store the strings.
 */

void solve() {
    int N;
    cin >> N;
    string A, B;
    cin >> A >> B;

    int countA0 = 0, countA1 = 0;
    int countB0 = 0, countB1 = 0;

    for (int i = 0; i < N; ++i) {
        if (A[i] == '0') countA0++;
        else countA1++;

        if (B[i] == '0') countB0++;
        else countB1++;
    }

    if (countA0 == countB0 && countA1 == countB1) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}