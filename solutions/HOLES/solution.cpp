#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to count the number of holes in a given string of uppercase English letters.
 * Based on the problem description:
 * - 1 hole: A, D, O, P, R, Q
 * - 2 holes: B
 * - 0 holes: C, E, F, G, H, I, J, K, L, M, N, S, T, U, V, W, X, Y, Z
 * 
 * Mapping:
 * A:1, B:2, C:0, D:1, E:0, F:0, G:0, H:0, I:0, J:0, K:0, L:0, M:0, N:0, 
 * O:1, P:1, Q:1, R:1, S:0, T:0, U:0, V:0, W:0, X:0, Y:0, Z:0
 */

int get_holes(char c) {
    switch (c) {
        case 'A': return 1;
        case 'B': return 2;
        case 'C': return 0;
        case 'D': return 1;
        case 'E': return 0;
        case 'F': return 0;
        case 'G': return 0;
        case 'H': return 0;
        case 'I': return 0;
        case 'J': return 0;
        case 'K': return 0;
        case 'L': return 0;
        case 'M': return 0;
        case 'N': return 0;
        case 'O': return 1;
        case 'P': return 1;
        case 'Q': return 1;
        case 'R': return 1;
        case 'S': return 0;
        case 'T': return 0;
        case 'U': return 0;
        case 'V': return 0;
        case 'W': return 0;
        case 'X': return 0;
        case 'Y': return 0;
        case 'Z': return 0;
        default: return 0;
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s;
        long long total_holes = 0;
        for (char c : s) {
            total_holes += get_holes(c);
        }
        cout << total_holes << "\n";
    }
    return 0;
}