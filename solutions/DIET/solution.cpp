#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef Diet
 * Approach:
 * We maintain a variable 'current_protein' representing the amount of protein 
 * Chef has stored. For each day i from 1 to N:
 * 1. Add the protein bought on day i (A_i) to 'current_protein'.
 * 2. Check if 'current_protein' is at least K.
 * 3. If it is, subtract K from 'current_protein' and proceed to the next day.
 * 4. If it is not, Chef fails on day i. Print "NO i" and break.
 * 5. If the loop completes, print "YES".
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) auxiliary space.
 */

void solve() {
    int N;
    long long K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long current_protein = 0;
    bool possible = true;
    int fail_day = -1;
    
    for (int i = 0; i < N; ++i) {
        current_protein += A[i];
        
        if (current_protein >= K) {
            current_protein -= K;
        } else {
            possible = false;
            fail_day = i + 1;
            break;
        }
    }
    
    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO " << fail_day << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}