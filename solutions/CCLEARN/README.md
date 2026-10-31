# [CodeChef Learn Problem Solving (CCLEARN)](https://www.codechef.com/problems/CCLEARN)

- **Difficulty Rating**: 287
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to calculate the total number of courses available for a given number of programming languages $N$. We are told that for every single programming language, there are exactly 2 courses available. Given $N$, we need to output the total count of courses.

## Intuition & Mathematical Observation
The relationship between the number of languages and the number of courses is linear. Since each language contributes 2 courses, the total number of courses is simply the product of the number of languages and 2.

Mathematically, if $N$ is the number of languages, the total number of courses $C$ is:
$$C = N \times 2$$

Given the constraints ($1 \le N \le 100$), the result will always be between 2 and 200, which fits well within a standard integer data type.

## Complexity Analysis
- **Time Complexity**: $O(1)$ — The calculation involves a single multiplication operation, which takes constant time.
- **Space Complexity**: $O(1)$ — We only use a single variable to store the input and the result, requiring constant extra space.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that for each language, there are 2 courses.
 * If there are N languages, the total number of courses is 2 * N.
 * 
 * Constraints:
 * 1 <= N <= 100
 * Since N is small, the result will be at most 200, which fits comfortably 
 * within a standard integer type.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // Read the number of languages
    if (cin >> n) {
        // Calculate total courses: 2 courses per language
        long long total_courses = 2LL * n;
        
        // Output the result
        cout << total_courses << "\n";
    }

    return 0;
}
```