#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N students with distinct scores.
 * Exactly X students pass the test.
 * A student passes if their score > passing_mark.
 * To maximize the passing_mark, we need to find the X-th highest score.
 * Let the sorted scores in descending order be S_1 > S_2 > ... > S_N.
 * If X students pass, the students with scores S_1, S_2, ..., S_X pass.
 * The student with the lowest passing score among these is S_X.
 * For this student to pass, the passing_mark must be strictly less than S_X.
 * To maximize the passing_mark, we set it to S_X - 1.
 * 
 * Example 2: 4 students, 1 passes. Scores: 5, 1, 7, 4.
 * Sorted descending: 7, 5, 4, 1.
 * X=1, so the top student (7) passes.
 * Passing mark must be < 7. Max integer is 6.
 */

void solve() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Sort in descending order
    sort(A.begin(), A.end(), greater<int>());

    // The X-th student (index X-1) is the one with the lowest score among those who pass.
    // The passing mark must be strictly less than this score.
    // Therefore, max passing mark = A[X-1] - 1.
    cout << A[X - 1] - 1 << "\n";
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