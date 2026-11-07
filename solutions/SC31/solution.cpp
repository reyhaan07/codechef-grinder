#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The battle rule states: if two contestants have the same weapon type, 
 * those weapons are destroyed. Otherwise, the winner collects the remaining weapons.
 * This is equivalent to the XOR operation. 
 * If a weapon type is present in an odd number of contestants, it will remain 
 * with the final winner. If it is present in an even number of contestants, 
 * it will be destroyed.
 * 
 * Since the XOR operation is associative and commutative, the final set of 
 * weapons the winner has is simply the XOR sum of all initial weapon strings.
 * 
 * We can represent each string of length 10 as an integer or simply XOR the 
 * bits at each position.
 */

void solve() {
    int N;
    cin >> N;
    
    // We use an array of 10 integers to represent the count of each weapon type.
    // Or more simply, just XOR the bits.
    vector<int> result(10, 0);
    
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < 10; ++j) {
            if (s[j] == '1') {
                result[j] ^= 1;
            }
        }
    }
    
    int count = 0;
    for (int j = 0; j < 10; ++j) {
        if (result[j] == 1) {
            count++;
        }
    }
    
    cout << count << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}