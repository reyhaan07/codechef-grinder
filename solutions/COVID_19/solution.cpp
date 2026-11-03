#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * 1. Row constraint: If two people are in the same row, there must be at least one empty seat between them.
 *    In a row of M seats, if we place people at indices 1, 3, 5, ..., the number of people is ceil(M / 2.0).
 *    This can be calculated as (M + 1) / 2.
 * 
 * 2. Column constraint: If two people are in different rows, there must be at least one completely empty row between them.
 *    If we have N rows, we can pick rows 1, 3, 5, ... to place people.
 *    The number of rows we can use is ceil(N / 2.0).
 *    This can be calculated as (N + 1) / 2.
 * 
 * Total tickets = (Number of rows used) * (Number of seats used per row)
 * Total tickets = ((N + 1) / 2) * ((M + 1) / 2)
 * 
 * Constraints: N, M <= 100. The result will fit in a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        // Calculate max rows and max seats per row using integer division
        long long rows_used = (n + 1) / 2;
        long long seats_per_row = (m + 1) / 2;

        long long total_tickets = rows_used * seats_per_row;

        cout << total_tickets << "\n";
    }

    return 0;
}