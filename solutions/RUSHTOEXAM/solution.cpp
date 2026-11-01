#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N hours.
 * Each hour, Chef reads A pages.
 * Total pages Chef can read = N * A.
 * Chef needs to read M pages.
 * If (N * A) >= M, Chef can finish reading. Otherwise, he cannot.
 * 
 * Constraints:
 * N <= 24, M <= 100, A <= 10.
 * The product N * A will be at most 240, which fits comfortably in a standard integer.
 * Using long long is safe practice.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single line of input, 
    // but standard competitive programming practice often involves test cases.
    // Given the problem format, we check if there's a test case count or just one line.
    // Based on the prompt "Handle multiple test cases", we assume the input might contain T.
    // However, the problem description says "The first and only line contains 3 integers".
    // We will write the code to handle the single case as described.
    
    long long N, M, A;
    if (!(cin >> N >> M >> A)) return 0;

    if (N * A >= M) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}