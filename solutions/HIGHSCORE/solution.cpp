#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef knows the total count of answers for each option (A, B, C, D).
 * He wants to maximize the marks he can *guarantee*.
 * 
 * If Chef decides to mark all N problems with option 'A', he is guaranteed 
 * to get at least N_A marks, because there are exactly N_A problems where 
 * the answer is 'A'.
 * 
 * Similarly, if he marks all problems with 'B', he gets N_B marks.
 * If he marks all with 'C', he gets N_C marks.
 * If he marks all with 'D', he gets N_D marks.
 * 
 * To guarantee the maximum marks, he should choose the option that appears 
 * the most frequently in the answer key. Thus, the answer is simply 
 * max(N_A, N_B, N_C, N_D).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        long long na, nb, nc, nd;
        cin >> na >> nb >> nc >> nd;

        // The maximum marks Chef can guarantee is the maximum of the counts
        // of the four options.
        long long max_marks = max({na, nb, nc, nd});
        
        cout << max_marks << "\n";
    }

    return 0;
}