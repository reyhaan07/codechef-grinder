#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Chef is a boy, so total boys = A + 1.
 * - Total girls = B.
 * - Each boy eats 4 slices, each girl eats 3 slices.
 * - Total slices needed = (A + 1) * 4 + B * 3.
 * - Each pizza has 8 slices.
 * - Number of pizzas needed = ceil(Total slices / 8).
 * - Using integer arithmetic, ceil(x / y) = (x + y - 1) / y.
 */

void solve() {
    long long A, B;
    if (!(cin >> A >> B)) return;

    long long total_boys = A + 1;
    long long total_girls = B;
    
    long long total_slices = (total_boys * 4) + (total_girls * 3);
    
    // Calculate ceiling division: (total_slices + 8 - 1) / 8
    long long pizzas_needed = (total_slices + 7) / 8;
    
    cout << pizzas_needed << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the 
    // input format description, but the instructions mention handling multiple 
    // test cases. We will check if there's a test case count provided or just 
    // handle the single input provided. Given the constraints and format:
    
    int t = 1; 
    // If the input format were to include a test case count, we would use:
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}