#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The rule states we can transition from T1 to T2 if:
 * 1. A consonant is replaced by a consonant.
 * 2. A vowel is replaced by a vowel.
 * 
 * This implies that the "vowel/consonant" status of each position in the string
 * must be invariant. If position 'i' in the starting string is a vowel, it must
 * remain a vowel in the destination string. If it is a consonant, it must remain
 * a consonant.
 * 
 * Target string: "CODETOWN"
 * Vowel/Consonant pattern of "CODETOWN":
 * C (C), O (V), D (C), E (V), T (C), O (V), W (C), N (C)
 * Pattern: C, V, C, V, C, V, C, C
 * 
 * We simply need to check if the input string S follows this exact pattern.
 */

bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void solve() {
    string s;
    cin >> s;
    string target = "CODETOWN";
    
    bool possible = true;
    for (int i = 0; i < 8; ++i) {
        bool s_is_vowel = isVowel(s[i]);
        bool t_is_vowel = isVowel(target[i]);
        
        if (s_is_vowel != t_is_vowel) {
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