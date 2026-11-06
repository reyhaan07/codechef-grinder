#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Problem: URCALC - Program Your Own CALCULATOR
 * Debugging Notes:
 * The previous solution was likely failing because the default cout behavior 
 * might not print enough decimal places for some test cases or might format 
 * integers differently than the judge expects. Using fixed and setprecision(7) 
 * ensures that the output is always represented with sufficient precision 
 * to satisfy the 10^-6 tolerance.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b;
    char c;

    // Reading inputs
    if (!(cin >> a >> b >> c)) return 0;

    double result = 0.0;

    // Perform operation based on the operator
    switch (c) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }

    // Output the result with high precision to satisfy the 10^-6 tolerance.
    // We use a precision of 7 to ensure accuracy.
    cout << fixed << setprecision(7) << result << endl;

    return 0;
}