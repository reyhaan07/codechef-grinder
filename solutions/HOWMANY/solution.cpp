#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: HOW MANY DIGITS DO I HAVE
 * The problem asks to categorize a number N (0 <= N <= 1000000) based on its digit count.
 * 
 * Logic:
 * - 0-9: 1 digit
 * - 10-99: 2 digits
 * - 100-999: 3 digits
 * - 1000+: More than 3 digits
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    if (!(cin >> n)) return 0;

    int len = n.length();

    if (len == 1) {
        cout << "1" << "\n";
    } else if (len == 2) {
        cout << "2" << "\n";
    } else if (len == 3) {
        cout << "3" << "\n";
    } else {
        cout << "More than 3 digits" << "\n";
    }

    return 0;
}