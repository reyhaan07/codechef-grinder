#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Rivalry
 * The task is to calculate the final ratings of Dominater and Everule
 * and compare them to determine who has the higher rating.
 * 
 * Final Rating of Dominater = R1 + D1
 * Final Rating of Everule = R2 + D2
 * 
 * Constraints:
 * R1, R2: [1, 3000]
 * D1, D2: [-200, 200]
 * The final ratings will fit within a standard 32-bit integer, 
 * but using long long is safe practice.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long R1, R2;
    long long D1, D2;

    // Reading input
    if (!(cin >> R1 >> R2)) return 0;
    if (!(cin >> D1 >> D2)) return 0;

    // Calculate final ratings
    long long final_dominater = R1 + D1;
    long long final_everule = R2 + D2;

    // Compare and output the result
    if (final_dominater > final_everule) {
        cout << "Dominater" << "\n";
    } else {
        cout << "Everule" << "\n";
    }

    return 0;
}