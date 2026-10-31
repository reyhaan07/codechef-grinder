#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Rank 1 to 50: 100% scholarship
 * Rank 51 to 100: 50% scholarship
 * Rank > 100: 0% scholarship
 * 
 * Constraints: 1 <= R <= 10^9
 * Time Complexity: O(1) per test case
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long R;
    if (!(cin >> R)) return 0;

    if (R >= 1 && R <= 50) {
        cout << 100 << "\n";
    } else if (R >= 51 && R <= 100) {
        cout << 50 << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}