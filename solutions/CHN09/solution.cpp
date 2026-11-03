#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a string consisting of 'a' (amber) and 'b' (brass).
 * We want all balloons to be the same color.
 * Option 1: Make all balloons 'a'. This requires painting all 'b' balloons to 'a'.
 *           The cost is the count of 'b's in the string.
 * Option 2: Make all balloons 'b'. This requires painting all 'a' balloons to 'b'.
 *           The cost is the count of 'a's in the string.
 * The minimum number of flips is simply min(count('a'), count('b')).
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(N) to store the string, or O(1) if processed character by character.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        string s;
        cin >> s;
        
        int count_a = 0;
        int count_b = 0;
        
        for (char c : s) {
            if (c == 'a') {
                count_a++;
            } else if (c == 'b') {
                count_b++;
            }
        }
        
        // The minimum number of flips is the minimum of the two counts
        cout << min(count_a, count_b) << "\n";
    }
    
    return 0;
}