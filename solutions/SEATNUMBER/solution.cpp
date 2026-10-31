#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Lower Deck: Seats 1 to 15
 * Upper Deck: Seats 16 to 30
 * 
 * Lower Deck (1-15):
 * Single: 11, 12, 13, 14, 15
 * Double: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 * 
 * Upper Deck (16-30):
 * Single: 26, 27, 28, 29, 30
 * Double: 16, 17, 18, 19, 20, 21, 22, 23, 24, 25
 */

void solve() {
    int n;
    cin >> n;

    string deck = (n <= 15) ? "Lower" : "Upper";
    string type;

    if (n <= 15) {
        // Lower deck logic
        if (n >= 1 && n <= 10) {
            type = "Double";
        } else {
            type = "Single";
        }
    } else {
        // Upper deck logic
        if (n >= 16 && n <= 25) {
            type = "Double";
        } else {
            type = "Single";
        }
    }

    cout << deck << " " << type << "\n";
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