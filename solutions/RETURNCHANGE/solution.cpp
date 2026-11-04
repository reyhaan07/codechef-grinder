#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The cost X is rounded to the nearest multiple of 10.
 * If the last digit is 5 or greater, it rounds up.
 * If the last digit is less than 5, it rounds down.
 * Mathematically, rounding X to the nearest multiple of 10 can be done using:
 * rounded_X = (X + 5) / 10 * 10
 * 
 * Example:
 * 35 -> (35+5)/10 * 10 = 40/10 * 10 = 40
 * 54 -> (54+5)/10 * 10 = 59/10 * 10 = 5 * 10 = 50
 * 80 -> (80+5)/10 * 10 = 85/10 * 10 = 8 * 10 = 80
 * 12 -> (12+5)/10 * 10 = 17/10 * 10 = 1 * 10 = 10
 * 
 * Chef pays 100, so the change is 100 - rounded_X.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x;
        cin >> x;
        
        // Calculate the rounded cost
        // Using integer division to truncate the result of (x+5)/10
        int rounded_x = ((x + 5) / 10) * 10;
        
        // Calculate change
        int change = 100 - rounded_x;
        
        cout << change << "\n";
    }

    return 0;
}