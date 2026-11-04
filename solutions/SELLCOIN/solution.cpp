#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has A silver coins and B gold coins.
 * Each gold coin can be traded for 2 silver coins.
 * Each silver coin can be sold for Rs. 1.
 * 
 * Total silver coins after trading all gold coins = A + (B * 2).
 * Since each silver coin is worth Rs. 1, the total money earned is (A + 2 * B).
 * 
 * Input format: The problem description implies reading A and B directly.
 * If the input contains multiple lines, we read until EOF.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B;
    // Read until End Of File (EOF) to handle potential multiple test cases 
    // without an explicit T variable.
    while (cin >> A >> B) {
        // Calculation:
        // Gold coins are converted to silver: B * 2
        // Total silver coins: A + 2 * B
        // Each silver coin sells for 1 unit of currency.
        long long total_money = A + (2 * B);
        
        cout << total_money << "\n";
    }

    return 0;
}