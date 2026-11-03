#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have two layers.
 * Layer 1 can be any color from 1 to A.
 * Layer 2 can be any color from 1 to B.
 * Constraint: Layer 1 color != Layer 2 color.
 * 
 * Total combinations without constraint = A * B.
 * We need to subtract the cases where Layer 1 color == Layer 2 color.
 * A color 'c' can be in both layers if 1 <= c <= A AND 1 <= c <= B.
 * This means 1 <= c <= min(A, B).
 * The number of such common colors is min(A, B).
 * 
 * Result = (A * B) - min(A, B).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single line of input for A and B,
    // but standard competitive programming practice often involves test cases.
    // Given the problem format, we read A and B directly.
    long long A, B;
    if (!(cin >> A >> B)) return 0;

    long long common_colors = min(A, B);
    long long total_combinations = A * B;
    long long result = total_combinations - common_colors;

    cout << result << "\n";

    return 0;
}