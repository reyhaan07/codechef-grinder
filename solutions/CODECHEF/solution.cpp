#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that Codechef rounds are held only on Wednesday.
 * The input N represents the day of the week:
 * 1: Sunday
 * 2: Monday
 * 3: Tuesday
 * 4: Wednesday
 * 5: Thursday
 * 6: Friday
 * 7: Saturday
 * 
 * We need to output "YES" if N == 4, otherwise "NO".
 * Constraints: 1 <= N <= 7.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    // The problem description implies a single input N, 
    // but standard competitive programming practice often involves 
    // checking if multiple test cases are provided. 
    // Given the problem description format, we read N once.
    if (cin >> N) {
        if (N == 4) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}