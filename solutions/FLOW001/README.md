# [Add Two Numbers (FLOW001)](https://www.codechef.com/problems/FLOW001)

- **Difficulty Rating**: 400
- **Solved in**: 1 attempt(s)

## Problem Summary
The task is to take an integer $T$ representing the number of test cases. For each test case, you are given two integers, $A$ and $B$. Your goal is to calculate and output the sum of these two integers ($A + B$).

## Intuition & Mathematical Observation
The problem is a fundamental arithmetic operation. Since the constraints for $A$ and $B$ are relatively small ($0 \le A, B \le 10000$), the sum will not exceed $20000$, which fits comfortably within a standard 32-bit integer. 

The core requirement is to handle multiple test cases efficiently. Using fast I/O (`ios_base::sync_with_stdio(false); cin.tie(NULL);`) is a good practice in competitive programming to ensure that the program handles input and output operations within the time limits, even if the number of test cases is large.

## Complexity Analysis
- **Time Complexity**: $O(T)$, where $T$ is the number of test cases. We perform a constant time addition operation for each test case.
- **Space Complexity**: $O(1)$, as we only use a fixed amount of extra space to store the variables $A$, $B$, and $T$.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Add Two Numbers (FLOW001)
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1), as we only use a few variables for input and output.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        if (cin >> a >> b) {
            // Calculate the sum and output the result
            // Using long long to prevent potential overflow, 
            // though int suffices for the given constraints (0 <= A, B <= 10000).
            cout << (a + b) << "\n";
        }
    }

    return 0;
}
```