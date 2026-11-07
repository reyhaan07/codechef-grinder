#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have current score A:B where A < B.
 * We want to play X more matches such that we can end up with a score (A+X) : B
 * where (A+X) > B.
 * 
 * To minimize X, we assume we win all X matches.
 * So we need A + X > B.
 * X > B - A.
 * Since X must be an integer, the minimum X is (B - A) + 1.
 * 
 * Example 1: 0 1
 * X > 1 - 0 => X > 1. Min X = 2.
 * 
 * Example 2: 2 4
 * X > 4 - 2 => X > 2. Min X = 3.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; 
    // Note: The problem description implies a single test case per run 
    // based on the input format, but standard competitive programming 
    // practice suggests checking if multiple test cases are provided.
    // Given the constraints and format, we handle the single input provided.
    
    long long A, B;
    if (cin >> A >> B) {
        long long diff = B - A;
        // We need to win at least diff + 1 matches to surpass B
        cout << (diff + 1) << "\n";
    }

    return 0;
}