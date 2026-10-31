# [ATM (HS08TEST)](https://www.codechef.com/problems/HS08TEST)

- **Difficulty Rating**: 460
- **Solved in**: 1 attempt(s)

## Problem Summary
The objective is to simulate a simple ATM transaction. Given a withdrawal amount $X$ and an initial account balance $Y$, the ATM will only process the transaction if:
1. The withdrawal amount $X$ is a multiple of 5.
2. The account balance $Y$ is sufficient to cover the withdrawal amount plus a bank transaction fee of $0.50$ (i.e., $X + 0.50 \le Y$).

If these conditions are met, the ATM deducts $X + 0.50$ from the balance. Otherwise, the transaction is rejected, and the original balance is returned. The output must be formatted to two decimal places.

## Intuition & Mathematical Observation
The problem is a straightforward conditional logic task. 
- **Divisibility Check**: We use the modulo operator (`X % 5 == 0`) to verify if the withdrawal amount is a multiple of 5.
- **Balance Check**: We compare the total cost ($X + 0.50$) against the current balance $Y$. 
- **Precision**: Since the output requires exactly two decimal places, we use `std::fixed` and `std::setprecision(2)` from the `<iomanip>` library to ensure the output format matches the problem requirements.

## Complexity Analysis
- **Time Complexity**: $O(1)$ — The solution performs a constant number of arithmetic operations and comparisons, regardless of the input values.
- **Space Complexity**: $O(1)$ — We only use a fixed amount of memory to store the two input variables and the result.

## Solution Code

```cpp
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

    // Read withdrawal amount and initial balance
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
```