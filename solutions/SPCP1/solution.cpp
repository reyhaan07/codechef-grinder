#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's weight = 60 kg
 * Chef's height = 130 cm
 * 
 * Condition to enter:
 * 1. Weight <= W
 * 2. Height >= H
 * 
 * Given:
 * 60 <= W
 * 130 >= H
 * 
 * If both conditions are true, output YES, otherwise NO.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int W, H;
    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice often involves reading until EOF 
    // or handling a specific number of test cases. Given the constraints and format:
    if (cin >> W >> H) {
        if (60 <= W && 130 >= H) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}