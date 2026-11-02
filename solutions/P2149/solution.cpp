#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a red rectangle (A x B) and a blue square (X x X).
 * Area of rectangle = A * B
 * Area of square = X * X
 * We want A * B <= X * X.
 * Each change of a dimension (A or B) costs 1.
 * Since we want to minimize cost:
 * 1. If A * B <= X * X, cost is 0.
 * 2. If we change one dimension (e.g., change A to 1), the new area is 1 * B = B.
 *    If B <= X * X, cost is 1.
 * 3. If we change both dimensions (e.g., change A to 1 and B to 1), the new area is 1 * 1 = 1.
 *    Since X >= 1, 1 <= X * X is always true, so cost is 2.
 * 
 * Given the constraints A, B, X <= 10, we can simply check:
 * - If A * B <= X * X: cost = 0
 * - Else if min(A, B) <= X * X or (1 * B <= X * X) or (A * 1 <= X * X): cost = 1
 *   Actually, the simplest way to get cost 1 is to change one dimension to 1.
 *   If we change A to 1, area becomes B. If B <= X*X, cost is 1.
 *   If we change B to 1, area becomes A. If A <= X*X, cost is 1.
 * - Else: cost = 2 (change both to 1, area becomes 1, which is <= X*X).
 */

void solve() {
    int A, B, X;
    cin >> A >> B >> X;

    long long rect_area = (long long)A * B;
    long long square_area = (long long)X * X;

    if (rect_area <= square_area) {
        cout << 0 << "\n";
    } else {
        // Try changing one dimension to 1.
        // If we change A to 1, area becomes B.
        // If we change B to 1, area becomes A.
        // If either B <= square_area or A <= square_area, cost is 1.
        if (A <= square_area || B <= square_area) {
            cout << 1 << "\n";
        } else {
            // Otherwise, we must change both to 1.
            cout << 2 << "\n";
        }
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