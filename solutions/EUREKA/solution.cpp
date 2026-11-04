#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to calculate f(N) = (0.143 * N)^N and round it to the nearest integer.
 * Constraints: 4 <= N <= 15.
 * 
 * Calculation:
 * For N = 15, f(15) = (0.143 * 15)^15 = (2.145)^15.
 * 2.145^15 is approximately 25000, which fits easily into a standard double 
 * and a long long integer.
 * 
 * Rounding:
 * The problem states:
 * - Print floor(x) if x - floor(x) < 0.5
 * - Otherwise, print floor(x) + 1
 * This is equivalent to the standard round(x) function in C++.
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
        
        // Calculate the base value
        double base = 0.143 * (double)n;
        
        // Calculate the power
        double result = pow(base, (double)n);
        
        // Round to the nearest integer
        // round() in C++ rounds to the nearest integer, with halfway cases 
        // rounded away from zero, which matches the problem requirement.
        long long rounded_result = (long long)round(result);
        
        cout << rounded_result << "\n";
    }
    
    return 0;
}