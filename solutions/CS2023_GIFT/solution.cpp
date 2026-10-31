#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Om has X rupees.
 * Laptop costs N rupees.
 * Gymkhana fund has M rupees.
 * Om can use the fund as much as he wants.
 * Therefore, the total money Om can have is X + M.
 * He can buy the laptop if (X + M) >= N.
 * 
 * Constraints: 1 <= X, N, M <= 10^3.
 * The sum X + M will be at most 2000, which fits in a standard integer.
 * Using long long is safe practice for competitive programming.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice often involves handling multiple 
    // test cases if specified. Given the problem description says "The first and only line",
    // we read the three integers once.
    
    long long X, N, M;
    if (!(cin >> X >> N >> M)) return 0;

    // Check if total available money is sufficient
    if (X + M >= N) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}