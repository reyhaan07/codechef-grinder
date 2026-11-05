#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has a daily limit of X calories.
 * He has already consumed Y sweets, each with Z calories.
 * Total calories consumed = Y * Z.
 * 
 * If (Y * Z) > X, he has exceeded the limit, output -1.
 * Otherwise, the remaining calories he can consume is (X - (Y * Z)).
 * 
 * Constraints: 1 <= X, Y, Z <= 100.
 * Since the maximum value is 100 * 100 = 10,000, standard 'int' is sufficient.
 * No multiple test cases are explicitly mentioned in the format description,
 * but the prompt asks to handle them if provided. Based on the problem 
 * description, it appears to be a single test case per run.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y, Z;
    if (!(cin >> X >> Y >> Z)) return 0;

    long long consumed = Y * Z;

    if (consumed > X) {
        cout << -1 << "\n";
    } else {
        cout << (X - consumed) << "\n";
    }

    return 0;
}