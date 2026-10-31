# [Enormous Input Test (INTEST)](https://www.codechef.com/problems/INTEST)

- **Difficulty Rating**: 420
- **Solved in**: 1 attempt(s)

## Problem Summary
The task is to read $n$ integers from the input and determine how many of these integers are divisible by a given divisor $k$. Given that $n$ can be as large as $10^7$, the primary challenge is not the logic, but the efficiency of reading the input.

## Intuition & Mathematical Observation
The core logic is straightforward: for every integer $a_i$ provided in the input, we check if $a_i \pmod k = 0$. If the condition holds, we increment a counter.

However, because $n$ is up to $10^7$, standard C++ I/O (`cin`/`cout`) can be too slow due to synchronization with C-style I/O and buffer flushing. To pass within the time limit, we must use `ios_base::sync_with_stdio(false);` and `cin.tie(NULL);` to disable synchronization and untie `cin` from `cout`, allowing for significantly faster input processing.

## Complexity Analysis
- **Time Complexity**: $O(n)$, where $n$ is the number of integers. We perform a single pass over the input, and each divisibility check is an $O(1)$ operation.
- **Space Complexity**: $O(1)$, as we only maintain a counter and a temporary variable to store the current input integer, requiring constant extra space regardless of the input size.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Enormous Input Test (INTEST)
 * Complexity Analysis:
 * Time Complexity: O(N), where N is the number of integers. Given N up to 10^7,
 * we must use fast I/O to ensure the solution runs within the 8s time limit.
 * Space Complexity: O(1), as we only need to store the count and the current number.
 */

int main() {
    // Fast I/O is critical for N = 10^7
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    
    // Read N and K
    if (!(cin >> n >> k)) return 0;

    int count = 0;
    long long a;

    // Process each of the N integers
    for (int i = 0; i < n; ++i) {
        cin >> a;
        // Check divisibility
        if (a % k == 0) {
            count++;
        }
    }

    // Output the final count
    cout << count << "\n";

    return 0;
}
```