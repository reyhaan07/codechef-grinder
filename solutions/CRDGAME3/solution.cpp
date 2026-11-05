#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To minimize the number of digits for a given power P, a player should use as many 9s as possible.
 * If a number has D digits, the maximum power it can have is 9 * D.
 * Therefore, to achieve a power P with the minimum number of digits D, 
 * we need 9 * D >= P, which implies D = ceil(P / 9.0).
 * In integer arithmetic, this is (P + 8) / 9.
 * 
 * Let D_C = (P_C + 8) / 9 and D_R = (P_R + 8) / 9.
 * - If D_C < D_R, Chef wins (output 0 D_C).
 * - If D_R <= D_C, Rick wins (output 1 D_R).
 * 
 * Constraints: P_C, P_R <= 10^6, so integer division is safe.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long pc, pr;
        cin >> pc >> pr;

        // Calculate minimum digits for Chef and Rick
        long long dc = (pc + 8) / 9;
        long long dr = (pr + 8) / 9;

        // Determine winner based on problem rules:
        // Chef wins if dc < dr.
        // Rick wins if dr <= dc (Rick wins ties).
        if (dc < dr) {
            cout << 0 << " " << dc << "\n";
        } else {
            cout << 1 << " " << dr << "\n";
        }
    }

    return 0;
}