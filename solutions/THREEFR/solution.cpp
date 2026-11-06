#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let A, B, C be the amounts of money the three friends have.
 * The statements are:
 * A - B = x
 * B - C = y
 * C - A = z
 * 
 * Summing these equations:
 * (A - B) + (B - C) + (C - A) = x + y + z
 * 0 = x + y + z
 * 
 * We are given X = |x|, Y = |y|, Z = |z|.
 * The condition x + y + z = 0 implies that the sum of three signed values is 0.
 * This means one of the values must be equal to the sum of the other two, 
 * or one value must be the sum of the other two with signs adjusted.
 * Specifically, the equation x + y + z = 0 can be satisfied if:
 * 1) x + y = z  => |x + y| = |z| = Z
 * 2) x + z = y  => |x + z| = |y| = Y
 * 3) y + z = x  => |y + z| = |x| = X
 * 
 * Since x, y, z can be positive or negative, we can choose the signs of x, y, z 
 * such that their sum is 0 if and only if one of the following holds:
 * X + Y = Z
 * X + Z = Y
 * Y + Z = X
 * Or more generally, if we consider the signs, we are looking for:
 * ±X ± Y ± Z = 0
 * This is equivalent to checking if the largest value is equal to the sum of the other two,
 * or if the largest value is equal to the difference of the other two.
 * Actually, the condition simplifies to:
 * Can we pick signs s1, s2, s3 in {-1, 1} such that s1*X + s2*Y + s3*Z = 0?
 * This is equivalent to:
 * X + Y = Z OR X + Z = Y OR Y + Z = X OR X = Y + Z (already covered)
 * Wait, let's re-evaluate:
 * x + y + z = 0
 * Possible combinations of signs:
 * 1) x + y + z = 0  => not possible since X, Y, Z >= 1
 * 2) x + y - z = 0  => X + Y = Z
 * 3) x - y + z = 0  => X + Z = Y
 * 4) -x + y + z = 0 => Y + Z = X
 * 
 * So the condition is simply: X + Y = Z OR X + Z = Y OR Y + Z = X.
 */

void solve() {
    int X, Y, Z;
    if (!(cin >> X >> Y >> Z)) return;

    if ((X + Y == Z) || (X + Z == Y) || (Y + Z == X)) {
        cout << "yes" << "\n";
    } else {
        cout << "no" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}