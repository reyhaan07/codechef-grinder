#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef gets 30 rupees for every stick eaten beyond X.
 * Let E be the number of extra sticks. E = R / 30.
 * Total sticks eaten = X + E.
 * Each plate contains Y sticks.
 * Chef orders plates until he has enough sticks to cover X + E.
 * Since he doesn't order a new plate until the previous one is finished,
 * the number of plates needed is ceil((X + E) / Y).
 * 
 * Using integer arithmetic, ceil(A / B) is equivalent to (A + B - 1) / B.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long X, Y, R;
        cin >> X >> Y >> R;

        // Calculate extra sticks eaten
        long long extra_sticks = R / 30;
        
        // Total sticks required to satisfy the condition
        long long total_sticks = X + extra_sticks;
        
        // Calculate number of plates: ceil(total_sticks / Y)
        // Using integer division: (total_sticks + Y - 1) / Y
        long long plates = (total_sticks + Y - 1) / Y;
        
        cout << plates << "\n";
    }

    return 0;
}