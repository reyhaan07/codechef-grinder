#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has two options:
 * 1. Buy a television: Fixed cost = 1000.
 * 2. Buy N toys: Cost = N * 200.
 * 
 * We need to find the minimum of these two values: min(1000, N * 200).
 * Given constraints: 1 <= N <= 10.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single input N, but standard competitive 
    // programming practice often involves test cases. If the problem specifies 
    // "The first and only line of input contains a single integer N", 
    // we handle it accordingly.
    
    int n;
    if (cin >> n) {
        long long tv_cost = 1000;
        long long toys_cost = (long long)n * 200;
        
        cout << min(tv_cost, toys_cost) << "\n";
    }

    return 0;
}