#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total family members = 5.
 * Daily consumption = 5 * X.
 * Number of days the buns last = floor(N / (5 * X)).
 * Total survival days = (days buns last) + D.
 * 
 * Note: If N < (5 * X), the family cannot eat for even one day, 
 * so the number of days the buns last is 0.
 * The formula floor(N / (5 * X)) handles this correctly since 
 * integer division in C++ performs truncation towards zero.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x, d;
        cin >> n >> x >> d;

        // Total buns required per day for 5 family members
        long long daily_requirement = 5 * x;

        // Calculate how many days the buns last
        // If n < daily_requirement, n / daily_requirement will be 0
        long long days_with_food = n / daily_requirement;

        // Total survival days is the sum of days with food and the extra D days
        long long total_days = days_with_food + d;

        cout << total_days << "\n";
    }

    return 0;
}