#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: DOUBLERENT
 * The task is to calculate the doubled rent given an initial rent X.
 * Since the constraints are small (1 <= X <= 10), a simple multiplication
 * by 2 is sufficient. Using long long is good practice to prevent overflow
 * in competitive programming, though int suffices here.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X per run based on the 
    // sample cases provided. However, standard competitive programming 
    // practice often involves reading until EOF or a specific count.
    // Given the problem description format, we read X directly.
    
    long long X;
    if (cin >> X) {
        long long final_rent = X * 2;
        cout << final_rent << "\n";
    }

    return 0;
}