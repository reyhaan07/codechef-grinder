#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Initial money: X
 * - Cost of one laddu: 10
 * - Number of laddus bought: N
 * - Cost of one jalebi: 20
 * 
 * Calculation:
 * 1. Money spent on laddus = 10 * N
 * 2. Remaining money = X - (10 * N)
 * 3. Number of jalebis = Remaining money / 20 (integer division)
 * 
 * Constraints:
 * 1 <= X <= 100
 * 1 <= N <= 10
 * 10 * N <= X
 * 
 * Since the problem statement implies a single test case per run based on the 
 * input format description, but asks to handle multiple test cases if provided,
 * we will implement the standard competitive programming structure.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description mentions "For each test case", 
    // implying we should check if there are multiple inputs.
    // Given the constraints and format, we read X and N.
    int X, N;
    while (cin >> X >> N) {
        int remaining_money = X - (10 * N);
        int jalebis = remaining_money / 20;
        cout << jalebis << "\n";
    }

    return 0;
}