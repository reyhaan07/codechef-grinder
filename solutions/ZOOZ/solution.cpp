#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need a binary string of length N such that the number of '01' subsequences 
 * equals the number of '10' subsequences.
 * 
 * Let c0 be the total count of 0s and c1 be the total count of 1s.
 * If we place a 1 at the start and a 1 at the end, and fill the middle with 0s,
 * the string looks like: 1 0 0 ... 0 1.
 * 
 * For a string starting and ending with 1:
 * Number of '01' subsequences = (number of 0s before each 1) summed over all 1s.
 * Number of '10' subsequences = (number of 1s before each 0) summed over all 0s.
 * 
 * A simple construction:
 * If we set the first and last characters to '1' and all middle characters to '0',
 * the string is 100...001.
 * - Number of '01' subsequences: Each '0' forms a '01' with the last '1'. Total = (N-2).
 * - Number of '10' subsequences: The first '1' forms a '10' with each '0'. Total = (N-2).
 * 
 * This construction satisfies the condition for any N >= 3.
 */

void solve() {
    int N;
    cin >> N;
    
    // Construction: 1 followed by (N-2) zeros followed by 1
    string res = "1";
    for (int i = 0; i < N - 2; ++i) {
        res += '0';
    }
    res += '1';
    
    cout << res << "\n";
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