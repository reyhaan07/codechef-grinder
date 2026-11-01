#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - 'I' gesture: Indian head-bob. If found, the person is definitely "INDIAN".
 * - 'Y' gesture: Usual "Yes". If found and no 'I' is found, the person is "NOT INDIAN".
 * - 'N' gesture: "No". This provides no information about nationality.
 * 
 * Logic:
 * 1. If the string contains 'I', output "INDIAN".
 * 2. Else if the string contains 'Y', output "NOT INDIAN".
 * 3. Otherwise (only 'N's present), output "NOT SURE".
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(N) to store the string.
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool foundI = false;
    bool foundY = false;

    for (char c : s) {
        if (c == 'I') {
            foundI = true;
            break;
        }
        if (c == 'Y') {
            foundY = true;
        }
    }

    if (foundI) {
        cout << "INDIAN" << "\n";
    } else if (foundY) {
        cout << "NOT INDIAN" << "\n";
    } else {
        cout << "NOT SURE" << "\n";
    }
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