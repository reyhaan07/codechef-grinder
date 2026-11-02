#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice and Bob must end up with the exact same multiset of animals.
 * This means the total count of each animal type in the store must be divisible by 2.
 * If the total count of any animal type is odd, it is impossible to split them
 * equally between Alice and Bob.
 * If the total count of every animal type is even, we can simply give half of 
 * each type to Alice and the other half to Bob, satisfying the condition.
 * 
 * Complexity:
 * Time: O(N) per test case to count frequencies, O(1) to check counts (since A_i <= 100).
 * Space: O(1) auxiliary space (fixed size array of 101).
 */

void solve() {
    int n;
    cin >> n;
    
    // Constraints say A_i <= 100, so we can use a frequency array
    int counts[101] = {0};
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        counts[a]++;
    }
    
    // Check if every animal type has an even count
    bool possible = true;
    for (int i = 1; i <= 100; ++i) {
        if (counts[i] % 2 != 0) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}