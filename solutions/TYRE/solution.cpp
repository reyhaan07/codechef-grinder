#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each bike has 2 tyres and each car has 4 tyres.
 * Given N bikes and M cars, the total number of tyres is (N * 2) + (M * 4).
 * Constraints: N, M <= 100. The maximum result is (100 * 2) + (100 * 4) = 600.
 * This fits well within a standard integer type.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        if (cin >> n >> m) {
            // Calculate total tyres: 2 tyres per bike, 4 per car
            long long total_tyres = (n * 2) + (m * 4);
            cout << total_tyres << "\n";
        }
    }

    return 0;
}