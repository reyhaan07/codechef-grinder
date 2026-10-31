#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Is it a VOWEL or CONSONANT
 * The problem asks to identify if a given uppercase English alphabet is a vowel or consonant.
 * Vowels are defined as 'A', 'E', 'I', 'O', 'U'.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    if (!(cin >> c)) return 0;

    // Check if the character is one of the defined vowels
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "Vowel" << "\n";
    } else {
        cout << "Consonant" << "\n";
    }

    return 0;
}