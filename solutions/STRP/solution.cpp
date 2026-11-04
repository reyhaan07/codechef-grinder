#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to minimize the number of operations to transfer string S.
 * An operation can send 1 or 2 copies of the same character.
 * To minimize operations, we should greedily group identical consecutive characters.
 * If we have a block of 'k' identical consecutive characters:
 * - We can send 2 characters at a time.
 * - Number of operations = ceil(k / 2).
 * 
 * Example: "aaab"
 * 'aaa' -> 3 characters. 3/2 = 1.5, so ceil(1.5) = 2 operations (one 'aa', one 'a').
 * 'b' -> 1 character. 1/2 = 0.5, so ceil(0.5) = 1 operation.
 * Total = 3 operations.
 * 
 * Algorithm:
 * 1. Iterate through the string and identify contiguous blocks of identical characters.
 * 2. For each block of length 'len', add (len + 1) / 2 to the total count.
 * 3. Time Complexity: O(N) per test case.
 * 4. Space Complexity: O(N) to store the string.
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 0) {
        cout << 0 << "\n";
        return;
    }

    long long total_ops = 0;
    int i = 0;
    while (i < n) {
        int count = 1;
        // Count length of current block of identical characters
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        // Add operations for this block: ceil(count / 2.0)
        total_ops += (count + 1) / 2;
        i++;
    }

    cout << total_ops << "\n";
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