#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has A milk chocolates and B dark chocolates.
 * Total chocolates = A + B.
 * Satisfaction increases if (milk_eaten != dark_eaten).
 * 
 * Let m be the number of milk chocolates eaten and d be the number of dark chocolates eaten.
 * At any step, we want to avoid m == d as much as possible.
 * 
 * If A == B:
 * We can eat one of each type alternately.
 * Step 1: Eat 1 milk. m=1, d=0. Satisfaction increases.
 * Step 2: Eat 1 dark. m=1, d=1. Satisfaction does not increase.
 * Step 3: Eat 1 milk. m=2, d=1. Satisfaction increases.
 * ...
 * The only time m == d is when we have eaten an equal number of both.
 * This happens after every pair of (1 milk, 1 dark).
 * Total satisfaction = (A + B) - (number of times m == d).
 * Since m == d happens when we have eaten k milk and k dark, this occurs
 * for k = 1, 2, ..., min(A, B).
 * 
 * Total satisfaction = (A + B) - min(A, B) = max(A, B).
 * Wait, let's re-check the sample cases.
 * Sample 1: A=1, B=2. Total=3. Output=3.
 * Sample 2: A=1, B=1. Total=2. Output=1.
 * Sample 3: A=4, B=2. Total=6. Output=6.
 * 
 * Pattern:
 * If A=1, B=2: max(1, 2) = 2. But output is 3.
 * If A=1, B=1: max(1, 1) = 1. Output is 1.
 * If A=4, B=2: max(4, 2) = 4. But output is 6.
 * 
 * Re-evaluating:
 * The condition m != d is satisfied at every step except when m == d.
 * m == d occurs when we have eaten equal amounts of both.
 * If we have A milk and B dark, we can eat all of the larger quantity first.
 * If A > B, we eat all A milk chocolates.
 * Step 1: 1 milk, 0 dark. (m!=d)
 * Step 2: 2 milk, 0 dark. (m!=d)
 * ...
 * Step A: A milk, 0 dark. (m!=d)
 * Step A+1: A milk, 1 dark. (m!=d)
 * ...
 * Step A+B: A milk, B dark. (m!=d)
 * 
 * In this strategy, m is never equal to d because m starts at 1 and goes to A, 
 * while d stays at 0 until all A are eaten, then d increases.
 * The only way m can equal d is if we eat them in a way that they stay equal.
 * If we eat all of the larger quantity first, we avoid m == d entirely!
 * Thus, the maximum satisfaction is simply A + B.
 * 
 * Wait, Sample 2: A=1, B=1. Output 1.
 * If we eat 1 milk, 1 dark:
 * Step 1: 1 milk, 0 dark (m!=d, sat=1)
 * Step 2: 1 milk, 1 dark (m==d, sat=1)
 * Total = 1.
 * 
 * If A != B, we can always eat all of the larger quantity first, then the smaller.
 * The only time m == d is unavoidable is when we are forced to balance them.
 * Actually, the formula is: A + B - min(A, B) is not correct.
 * It is: (A + B) - (number of times m == d).
 * m == d happens exactly min(A, B) times if we alternate.
 * But we don't have to alternate. We can eat all of one type first.
 * If A > B, we eat all A milk. m goes 1..A, d is 0. m != d always.
 * Then we eat B dark. m is A, d goes 1..B. m != d as long as A != d.
 * Since A > B, A != d is always true.
 * So if A != B, satisfaction is A + B.
 * If A == B, satisfaction is A + B - 1.
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a == b) {
            cout << a + b - 1 << "\n";
        } else {
            cout << a + b << "\n";
        }
    }
    return 0;
}