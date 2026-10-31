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

    // The problem description implies a single input N per execution,
    // but standard competitive programming practice often involves 
    // reading until EOF or handling a single input.
    // Given the problem constraints and format:
    int n;
    if (cin >> n) {
        // Calculate total courses
        long long total_courses = 2LL * n;
        
        // Output the result
        cout << total_courses << "\n";
    }

    return 0;
}