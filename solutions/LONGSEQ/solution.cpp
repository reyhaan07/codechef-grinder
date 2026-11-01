#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a string of 0s and 1s.
 * We want to make all digits the same by flipping exactly one digit.
 * 
 * Let 'count0' be the number of 0s and 'count1' be the number of 1s.
 * 
 * Case 1: To make all digits 1s, we need to flip all 0s to 1s.
 * This is possible if and only if count0 == 1.
 * 
 * Case 2: To make all digits 0s, we need to flip all 1s to 0s.
 * This is possible if and only if count1 == 1.
 * 
 * Therefore, the condition is (count0 == 1 && count1 == (total_length - 1)) 
 * OR (count1 == 1 && count0 == (total_length - 1)).
 * 
 * Simplified: The condition is satisfied if (count0 == 1 and count1 == total_length - 1) 
 * OR (count1 == 1 and count0 == total_length - 1).
 * Note that if the string length is 1, it's already "all same", but the problem 
 * says "change exactly one digit". If length is 1, flipping the only digit 
 * makes it the other digit, which is still "all same". However, the sample 
 * cases imply we check if the resulting string is uniform.
 */

void solve() {
    string s;
    cin >> s;
    
    int count0 = 0;
    int count1 = 0;
    
    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }
    
    // To make all 1s, we need exactly one 0 and the rest 1s.
    // To make all 0s, we need exactly one 1 and the rest 0s.
    if ((count0 == 1 && count1 == (int)s.length() - 1) || 
        (count1 == 1 && count0 == (int)s.length() - 1)) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}