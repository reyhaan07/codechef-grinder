# [Number Mirror (START01)](https://www.codechef.com/problems/START01)

- **Difficulty Rating**: 420
- **Solved in**: 1 attempt(s)

## Problem Summary
The objective of this problem is straightforward: read a single integer $N$ from the standard input and output the exact same integer back to the standard output.

## Intuition & Mathematical Observation
The problem acts as a "Hello World" equivalent for competitive programming. Since the input is a single integer $N$ (where $0 \le N \le 10^5$), no complex logic, data structures, or algorithms are required. We simply need to store the value in a variable and print it. Using fast I/O techniques is good practice, even for simple problems, to ensure the program runs efficiently.

## Complexity Analysis
- **Time Complexity**: $O(1)$ — The program performs a single read and a single write operation, which takes constant time.
- **Space Complexity**: $O(1)$ — We only use a single variable to store the input integer, requiring constant extra space.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Number Mirror
 * The task is to read an integer N and print it back.
 * Constraints: 0 <= N <= 10^5.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup to optimize input and output operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem statement implies reading a single integer N.
    // Using long long to ensure safety, though int suffices for 10^5.
    long long n;
    if (cin >> n) {
        cout << n << "\n";
    }

    return 0;
}
```