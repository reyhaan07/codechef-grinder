#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each car requires 4 tyres.
 * Each bike requires 2 tyres.
 * Chef wants to manufacture the maximum number of cars first.
 * Let N be the total number of tyres.
 * Number of cars = N / 4 (integer division).
 * Tyres used for cars = (N / 4) * 4.
 * Remaining tyres = N - ((N / 4) * 4).
 * This is equivalent to N % 4.
 * 
 * If the remaining tyres are 2, Chef can manufacture 1 bike.
 * If the remaining tyres are 0, Chef cannot manufacture any bike.
 * Since N is always even, N % 4 can only be 0 or 2.
 * If N % 4 == 2, output YES.
 * If N % 4 == 0, output NO.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        
        // Calculate remaining tyres after making maximum cars
        int remaining_tyres = n % 4;
        
        // If remaining tyres are 2, a bike can be made
        if (remaining_tyres == 2) {
            cout << "YES" << "\n";
        } else {
            // If remaining tyres are 0, no bike can be made
            cout << "NO" << "\n";
        }
    }
    return 0;
}