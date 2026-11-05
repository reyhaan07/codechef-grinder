#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The week starts on Monday.
 * Days: 1(Mon), 2(Tue), 3(Wed), 4(Thu), 5(Fri), 6(Sat), 7(Sun).
 * Akash takes a leave every Saturday (day 6, 13, 20, ...).
 * 
 * For a month of N days:
 * Every full week (7 days) contains exactly one Saturday.
 * The number of full weeks is N / 7.
 * After the full weeks, there are N % 7 remaining days.
 * If the remaining days include the 6th day (Saturday), we add 1 to the count.
 * 
 * Logic:
 * Number of Saturdays = (N / 7) + (1 if (N % 7 == 6) else 0)
 * 
 * Constraints:
 * N <= 10^9, so use long long to prevent any potential overflow issues, 
 * though N fits in a standard 32-bit signed integer.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        
        long long leaves = n / 7;
        if (n % 7 == 6) {
            leaves += 1;
        }
        
        cout << leaves << "\n";
    }
    
    return 0;
}