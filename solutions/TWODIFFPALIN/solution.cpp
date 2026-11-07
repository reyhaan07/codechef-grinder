#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to construct two different binary strings that are both palindromes 
 * and contain exactly A zeros and B ones.
 * 
 * A palindrome is determined by its first ceil(length/2) characters.
 * If A is odd and B is odd, we cannot construct even one palindrome because
 * the middle element would have to be both 0 and 1, which is impossible.
 * 
 * If A is even and B is even:
 * We can always construct at least two. For example, if A=2, B=2:
 * String 1: 0110, String 2: 1001.
 * 
 * If one of A or B is odd:
 * We can construct at least one palindrome. For example, if A=2, B=3:
 * String 1: 10101, String 2: 01110.
 * 
 * The only cases where we cannot construct two different palindromes are:
 * 1. If A is odd AND B is odd: We cannot construct even one palindrome.
 * 2. If A=1 and B=1: Only "01" and "10" are possible, but neither is a palindrome.
 *    Actually, if A=1, B=1, we can't make a palindrome of length 2.
 *    Wait, if A=1, B=1, the only strings are "01" and "10", neither is a palindrome.
 *    If A=1, B=odd (e.g., 1, 3), we can make "1011" (no) -> "11011" (yes).
 * 
 * General rule:
 * - If A is odd and B is odd, it's impossible to form a palindrome (0).
 * - If A=1 or B=1, we can only form one unique palindrome structure (e.g., 11011).
 *   Actually, if A=1, B=2, we can make "101". If A=1, B=4, we can make "11011".
 *   In these cases, there is only one way to arrange the characters to form a palindrome.
 * 
 * Conclusion:
 * - If (A % 2 != 0 && B % 2 != 0) -> No
 * - If (A == 1 || B == 1) -> No
 * - Otherwise -> Yes
 */

void solve() {
    int A, B;
    cin >> A >> B;

    if ((A % 2 != 0 && B % 2 != 0) || (A == 1 || B == 1)) {
        cout << "No" << "\n";
    } else {
        cout << "Yes" << "\n";
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