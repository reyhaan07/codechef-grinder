#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Gross Salary
 * Logic:
 * If basic salary < 1500:
 *   HRA = 0.10 * basic
 *   DA = 0.90 * basic
 *   Gross = basic + 0.10 * basic + 0.90 * basic = 2.0 * basic
 * If basic salary >= 1500:
 *   HRA = 500
 *   DA = 0.98 * basic
 *   Gross = basic + 500 + 0.98 * basic = 1.98 * basic + 500
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        double basic;
        cin >> basic;

        double gross;
        if (basic < 1500) {
            gross = basic + (0.10 * basic) + (0.90 * basic);
        } else {
            gross = basic + 500 + (0.98 * basic);
        }

        // The problem requires output with precision. 
        // Using fixed and setprecision to handle the decimal requirement.
        // If the result is an integer, the sample output shows it might not need decimals,
        // but standard competitive programming practice for "absolute error < 10^-2" 
        // is to use fixed precision.
        cout << fixed << setprecision(2);
        
        // Check if the number is effectively an integer to match sample output style
        if (abs(gross - floor(gross)) < 1e-9) {
            cout << (long long)gross << "\n";
        } else {
            cout << gross << "\n";
        }
    }

    return 0;
}