#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef and Cook-Off
 * The problem asks us to classify a contestant based on the number of problems solved.
 * We are given 5 binary integers for each contestant, where 1 means solved and 0 means not solved.
 * We simply sum the 5 integers to get the count of solved problems and map it to the required string.
 * 
 * Time Complexity: O(N) where N is the number of competitors.
 * Space Complexity: O(1) as we only store the sum of the current row.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    while (n--) {
        int solved_count = 0;
        for (int i = 0; i < 5; ++i) {
            int val;
            cin >> val;
            solved_count += val;
        }
        
        if (solved_count == 0) {
            cout << "Beginner" << "\n";
        } else if (solved_count == 1) {
            cout << "Junior Developer" << "\n";
        } else if (solved_count == 2) {
            cout << "Middle Developer" << "\n";
        } else if (solved_count == 3) {
            cout << "Senior Developer" << "\n";
        } else if (solved_count == 4) {
            cout << "Hacker" << "\n";
        } else if (solved_count == 5) {
            cout << "Jeff Dean" << "\n";
        }
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}