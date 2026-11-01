#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that Starters 120 is today, and Starters 121 is likely to be 
 * on Valentine's Day. Given N, we need to check if N is 121.
 * Constraints: 120 <= N <= 123.
 * 
 * Logic:
 * If N == 121, output "Likely".
 * Otherwise, output "Unlikely".
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    // The problem description implies a single integer N input.
    // Even though the prompt mentions "Handle multiple test cases", 
    // the problem description specifies "The input will contain a single integer N."
    // We will read N and output the result.
    if (cin >> N) {
        if (N == 121) {
            cout << "Likely" << "\n";
        } else {
            cout << "Unlikely" << "\n";
        }
    }

    return 0;
}