#include <iostream>

/**
 * Problem Analysis:
 * Chef bakes one cake every day from date X to 24 (inclusive).
 * The number of days from X to 24 is calculated as (24 - X + 1).
 * 
 * Constraints:
 * 1 <= X <= 24
 * 
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize I/O operations
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x;
    // Read the single integer X as specified in the problem format
    if (std::cin >> x) {
        // Calculate the number of days from X to 24 inclusive
        int result = 24 - x + 1;
        std::cout << result << std::endl;
    }

    return 0;
}