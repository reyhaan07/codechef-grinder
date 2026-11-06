#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef starts serving from the right side.
 * He serves from the right side whenever his current score is even.
 * The points are 0, 1, 2, 3, ..., P.
 * Chef serves for every point he has won, plus the initial serve at score 0.
 * The sequence of scores when he serves from the right is: 0, 2, 4, 6, ...
 * We need to count how many even numbers are in the range [0, P].
 * 
 * The even numbers are 0, 2, 4, ..., 2k where 2k <= P.
 * This is equivalent to finding the number of integers k such that 0 <= 2k <= P.
 * 2k <= P  =>  k <= P/2.
 * Since k starts from 0, the number of values is floor(P/2) + 1.
 * 
 * Example P=2: 0, 2 (Count = 2) -> floor(2/2) + 1 = 2. Correct.
 * Example P=9: 0, 2, 4, 6, 8 (Count = 5) -> floor(9/2) + 1 = 4 + 1 = 5. Correct.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long p;
        cin >> p;
        
        // The number of times Chef serves from the right is (P / 2) + 1
        long long result = (p / 2) + 1;
        cout << result << "\n";
    }

    return 0;
}