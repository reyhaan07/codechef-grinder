#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: ATM (HS08TEST)
 * Logic:
 * 1. Check if the withdrawal amount X is a multiple of 5.
 * 2. Check if the balance Y is sufficient to cover (X + 0.50).
 * 3. If both conditions are met, output (Y - X - 0.50) formatted to 2 decimal places.
 * 4. Otherwise, output the original balance Y formatted to 2 decimal places.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    double Y;

    // The problem statement implies a single test case per execution based on the 
    // standard format of this specific legacy problem.
    if (cin >> X >> Y) {
        // Check if withdrawal amount is a multiple of 5
        // AND if the account has enough balance (X + 0.50 <= Y)
        if (X % 5 == 0 && (double)X + 0.50 <= Y) {
            double remaining_balance = Y - X - 0.50;
            cout << fixed << setprecision(2) << remaining_balance << "\n";
        } else {
            // Transaction fails, print original balance
            cout << fixed << setprecision(2) << Y << "\n";
        }
    }

    return 0;
}