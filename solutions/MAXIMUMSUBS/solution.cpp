#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The contest lasts for X minutes, which is X * 60 seconds.
 * The participant cannot make a submission in the last 5 seconds.
 * Therefore, the total available time for submissions is (X * 60) - 5 seconds.
 * Since a submission can be made every 30 seconds, the number of submissions
 * is the floor of (Total Available Time / 30).
 * 
 * Formula: floor((X * 60 - 5) / 30)
 * 
 * Example X=1: (60 - 5) / 30 = 55 / 30 = 1.833 -> 1 submission?
 * Wait, let's re-check the sample:
 * X=1 (60s): Sample output is 2.
 * If we can submit at 0s and 30s, that's 2 submissions.
 * The constraint "cannot make any submission in the last 5 seconds" means
 * we can submit at any time t where 0 <= t <= (X * 60 - 5).
 * The number of submissions is floor((X * 60) / 30) = 2 * X.
 * Let's verify:
 * X=1: 2 * 1 = 2. Correct.
 * X=2: 2 * 2 = 4. Correct.
 * The "last 5 seconds" constraint is satisfied if we submit at 0, 30, 60...
 * For X=1, 60s total, last 5s is [55, 60]. Submissions at 0 and 30 are valid.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x;
        cin >> x;
        // Based on the sample cases, the answer is simply 2 * X.
        // 1 minute = 60 seconds. 60 / 30 = 2 submissions per minute.
        cout << 2 * x << "\n";
    }
    return 0;
}