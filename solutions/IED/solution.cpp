#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef sells C items at price A, total = A * C.
 * Chefina sells C items at price B, total = B * C.
 * We need to find max(A * C, B * C).
 * Since C is positive, this is equivalent to C * max(A, B).
 * 
 * Constraints: 1 <= A, B, C <= 10.
 * The maximum possible value is 10 * 10 = 100, which fits in a standard integer.
 * Using long long is safe practice for competitive programming.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the format,
    // but standard competitive programming practice often involves reading 
    // until EOF or a specific number of test cases. 
    // Given the input format description, we read A, B, and C once.
    
    long long A, B, C;
    if (cin >> A >> B >> C) {
        long long chef_sales = A * C;
        long long chefina_sales = B * C;
        
        cout << max(chef_sales, chefina_sales) << "\n";
    }

    return 0;
}