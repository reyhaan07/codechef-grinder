#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The goal is to reach 5 medals for each category (Gold, Silver, Bronze).
 * Given current medals G, S, B:
 * Additional Gold needed = 5 - G
 * Additional Silver needed = 5 - S
 * Additional Bronze needed = 5 - B
 * Total additional medals = (5 - G) + (5 - S) + (5 - B)
 * Since 1 <= G, S, B <= 5, these values will always be non-negative.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single line of input for one test case,
    // but standard competitive programming practice often involves handling 
    // multiple test cases if specified. Given the constraints and format:
    int G, S, B;
    if (cin >> G >> S >> B) {
        int neededG = 5 - G;
        int neededS = 5 - S;
        int neededB = 5 - B;
        
        long long totalNeeded = (long long)neededG + neededS + neededB;
        
        cout << totalNeeded << "\n";
    }

    return 0;
}