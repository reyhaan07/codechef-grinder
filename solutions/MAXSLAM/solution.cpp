#include <iostream>

/**
 * Problem Analysis:
 * Chef needs at least 25 total wins.
 * Current wins = X.
 * Wins needed = 25 - X.
 * Each year, Chef wins 4 Grand Slams.
 * Let Y be the number of years.
 * We need X + 4 * Y >= 25, which means 4 * Y >= 25 - X.
 * Therefore, Y = ceil((25 - X) / 4).
 * 
 * Input format: Single integer X.
 */

int main() {
    // Optimize I/O operations
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long X;
    if (std::cin >> X) {
        long long needed = 25 - X;
        
        // If Chef already has 25 or more, he needs 0 years.
        if (needed <= 0) {
            std::cout << 0 << std::endl;
        } else {
            // Calculate ceil(needed / 4) using integer arithmetic: (needed + 4 - 1) / 4
            long long years = (needed + 3) / 4;
            std::cout << years << std::endl;
        }
    }
    
    return 0;
}