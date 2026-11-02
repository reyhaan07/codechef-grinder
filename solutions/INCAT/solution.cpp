#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a string S of length 3. We need to determine if it can be 
 * rearranged to form the string "cat".
 * 
 * A string of length 3 can be rearranged to form "cat" if and only if 
 * it contains exactly one 'c', one 'a', and one 't'.
 * 
 * Approach:
 * 1. Read the string S.
 * 2. Sort the string S.
 * 3. Compare the sorted string with the sorted version of "cat", which is "act".
 * 4. If they are equal, output "Yes", otherwise output "No".
 */

void solve() {
    string s;
    cin >> s;
    
    // Sort the input string
    sort(s.begin(), s.end());
    
    // The target string "cat" sorted is "act"
    if (s == "act") {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // The problem description implies a single test case per run based on the 
    // input format description, but standard competitive programming practice 
    // often involves test cases. Given the constraints, we handle the input as provided.
    solve();
    
    return 0;
}