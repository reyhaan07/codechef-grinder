#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have two strings A and B of length N, consisting of 'a' and 'b'.
 * We can shuffle A and B independently. We want to know if there exists a 
 * configuration such that A[i] != B[i] for all i.
 * 
 * Let countA_a, countA_b be the counts of 'a' and 'b' in A.
 * Let countB_a, countB_b be the counts of 'a' and 'b' in B.
 * 
 * To satisfy A[i] != B[i], at each index i:
 * - If A[i] = 'a', then B[i] must be 'b'.
 * - If A[i] = 'b', then B[i] must be 'a'.
 * 
 * This implies that for every 'a' in A, we must pair it with a 'b' in B.
 * For every 'b' in A, we must pair it with an 'a' in B.
 * 
 * Therefore, the number of 'a's in A must equal the number of 'b's in B,
 * and the number of 'b's in A must equal the number of 'a's in B.
 * 
 * Let countA_a = x, countA_b = N - x.
 * Let countB_a = y, countB_b = N - y.
 * 
 * Condition:
 * x = N - y  => x + y = N
 * (N - x) = y => x + y = N
 * 
 * Both conditions simplify to x + y = N.
 * This means the total number of 'a's across both strings must be exactly N.
 * (countA_a + countB_a = N).
 */

void solve() {
    int N;
    cin >> N;
    string A, B;
    cin >> A >> B;

    int countA_a = 0;
    for (char c : A) {
        if (c == 'a') countA_a++;
    }

    int countB_a = 0;
    for (char c : B) {
        if (c == 'a') countB_a++;
    }

    if (countA_a + countB_a == N) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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