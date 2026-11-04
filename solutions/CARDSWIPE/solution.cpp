#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to track the number of people currently inside the office.
 * A swipe by an ID that is currently "out" means they enter.
 * A swipe by an ID that is currently "in" means they leave.
 * We need to maintain the current count of people and update the maximum count seen so far.
 * 
 * Data Structures:
 * - A boolean array or a set to track the status (in/out) of each ID.
 * - Since IDs are up to N (2*10^5), a vector<bool> or a simple array is efficient.
 * 
 * Complexity:
 * - Time: O(N) per test case, where N is the number of swipes. Total time O(sum of N), which is 10^6.
 * - Space: O(N) to store the status of IDs.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    // status[i] = true if person with ID i is inside, false otherwise.
    // Using vector<bool> or vector<char> to save memory.
    vector<bool> is_inside(n + 1, false);
    
    int current_people = 0;
    int max_people = 0;
    
    for (int i = 0; i < n; ++i) {
        int id;
        cin >> id;
        
        if (is_inside[id]) {
            // Person is leaving
            is_inside[id] = false;
            current_people--;
        } else {
            // Person is entering
            is_inside[id] = true;
            current_people++;
        }
        
        if (current_people > max_people) {
            max_people = current_people;
        }
    }
    
    cout << max_people << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}