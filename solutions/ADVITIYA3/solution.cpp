#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N jars, each with A_i cookies. We need to choose one jar i such that
 * we can distribute A_i cookies among K children equally, with each child getting
 * at least 1 cookie.
 * 
 * Let x be the number of cookies each child gets.
 * Then x * K <= A_i, where x >= 1.
 * The number of wasted cookies is A_i - (x * K).
 * To minimize waste, we want x * K to be the largest multiple of K that is <= A_i.
 * This is equivalent to A_i % K.
 * 
 * Condition: We must be able to give at least 1 cookie to each child.
 * This means A_i >= K.
 * If for all i, A_i < K, then it is impossible, output -1.
 * Otherwise, we want to minimize (A_i % K) among all jars where A_i >= K.
 */

void solve() {
    int N;
    long long K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long min_waste = -1;
    bool possible = false;
    
    for (int i = 0; i < N; ++i) {
        if (A[i] >= K) {
            long long waste = A[i] % K;
            if (!possible || waste < min_waste) {
                min_waste = waste;
                possible = true;
            }
        }
    }
    
    cout << min_waste << "\n";
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