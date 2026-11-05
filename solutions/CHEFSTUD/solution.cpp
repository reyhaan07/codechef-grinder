#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that students talking to the right ('>') turn to the left ('<'),
 * and students talking to the left ('<') turn to the right ('>').
 * Students studying ('*') remain studying.
 * 
 * After the transformation:
 * '>' becomes '<'
 * '<' becomes '>'
 * '*' remains '*'
 * 
 * Chef punishes pairs that are talking to each other. A pair is talking if 
 * the left student is facing right ('>') and the right student is facing left ('<').
 * 
 * So, we are looking for the pattern "><" in the transformed string.
 * Let the original string be S.
 * The transformed string S' has:
 * S'[i] = '<' if S[i] == '>'
 * S'[i] = '>' if S[i] == '<'
 * S'[i] = '*' if S[i] == '*'
 * 
 * We need to count occurrences of "><" in S'.
 * This is equivalent to counting occurrences of "<>" in the original string S.
 */

void solve() {
    string s;
    cin >> s;
    
    int count = 0;
    int n = s.length();
    
    // We need to count how many times "<" is followed by ">" in the original string.
    // Each such occurrence represents a pair that will become "><" after transformation.
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == '<' && s[i + 1] == '>') {
            count++;
        }
    }
    
    cout << count << "\n";
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}