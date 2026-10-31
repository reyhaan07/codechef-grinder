# [Chef and Instant Noodles (INSTNOODLE)](https://www.codechef.com/problems/INSTNOODLE)

- **Difficulty Rating**: 456
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef has $X$ stoves, and each stove can prepare exactly one packet of instant noodles per minute. Given that Chef has $Y$ minutes to cook, we need to calculate the maximum number of customers Chef can serve, assuming each customer orders exactly one packet of noodles.

## Intuition & Mathematical Observation
The problem asks for the total number of noodle packets that can be produced within a given timeframe.
- Each stove produces $1$ packet per minute.
- In $Y$ minutes, a single stove produces $1 \times Y = Y$ packets.
- With $X$ stoves working simultaneously, the total production capacity is $X \times Y$ packets.

Since each customer requires exactly one packet, the total number of customers served is simply the product of the number of stoves and the time available:
$$\text{Total Customers} = X \times Y$$

Given the constraints $1 \le X, Y \le 1000$, the maximum possible result is $1,000,000$, which comfortably fits within a standard 32-bit integer (`int` in C++).

## Complexity Analysis
- **Time Complexity**: $O(1)$ — The solution performs a single multiplication operation regardless of the input size.
- **Space Complexity**: $O(1)$ — Only a constant amount of memory is used to store the variables $X$ and $Y$.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X stoves.
 * Each stove can cook 1 packet per minute.
 * In Y minutes, each stove can cook Y packets.
 * Total packets = X * Y.
 * Since each customer orders 1 packet, the total number of customers served is X * Y.
 * 
 * Constraints:
 * 1 <= X, Y <= 1000
 * The maximum result is 1000 * 1000 = 1,000,000, which fits in a standard 32-bit integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    
    // Read input X (stoves) and Y (minutes)
    if (cin >> X >> Y) {
        // Output the total number of customers served
        cout << (X * Y) << "\n";
    }

    return 0;
}
```