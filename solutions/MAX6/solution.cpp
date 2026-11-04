#include <iostream>

/**
 * Problem Analysis:
 * We need to maximize s such that:
 * 1) s <= 100
 * 2) 6*s <= X
 * 3) The remaining runs (X - 6*s) can be scored in the remaining (100 - s) balls.
 *    Since each remaining ball can score at most 4 runs, we need:
 *    (X - 6*s) <= 4 * (100 - s)
 * 
 * Given 100 <= X <= 200:
 * s <= X/6
 * s >= (X - 400) / 2
 * 
 * Since X <= 200, (X - 400) is at most -200, so (X - 400)/2 is at most -100.
 * Thus, any s >= 0 satisfies the second inequality.
 * The constraint is simply s <= X/6 and s <= 100.
 * Since X <= 200, X/6 is at most 33, which is <= 100.
 * Therefore, the maximum s is simply floor(X / 6).
 * 
 * Note: The problem description does not mention multiple test cases.
 */

int main() {
    // Optimize I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int X;
    if (std::cin >> X) {
        std::cout << X / 6 << std::endl;
    }
    
    return 0;
}