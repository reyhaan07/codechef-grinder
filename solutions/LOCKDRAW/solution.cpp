#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have three problems with points A, B, and C.
 * A draw occurs if the sum of points of one player equals the sum of points of the other.
 * Since all problems must be solved, the total sum of points is S = A + B + C.
 * For a draw to occur, one player must have S/2 points.
 * This is only possible if S is even and there exists a subset of {A, B, C} that sums to S/2.
 * 
 * Let the three values be sorted such that x <= y <= z.
 * The possible sums for one player are:
 * 1. x
 * 2. y
 * 3. z
 * 4. x + y
 * 5. x + z
 * 6. y + z
 * 
 * A draw occurs if any of these equal the remaining sum.
 * Specifically:
 * - x + y = z
 * - x + z = y (impossible since x, y, z > 0 and x <= y <= z)
 * - y + z = x (impossible since x, y, z > 0 and x <= y <= z)
 * 
 * Thus, the condition for a draw is simply that the sum of the two smaller numbers 
 * equals the largest number, or any combination where one subset equals the sum of the others.
 * Mathematically, this is equivalent to checking if:
 * A + B == C OR A + C == B OR B + C == A.
 */

void solve() {
    long long arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    sort(arr, arr + 3);
    
    // If the sum of the two smaller problems equals the largest, 
    // one player can take the two smaller ones and the other takes the largest.
    if (arr[0] + arr[1] == arr[2]) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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