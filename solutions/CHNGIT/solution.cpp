#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to make all elements in the sequence equal. 
 * In one move, we can change A[i] to A[i-1] or A[i+1].
 * This implies that if we want to make all elements equal to some value X, 
 * we can propagate the value X from an existing instance of X to all other positions.
 * 
 * If there are 'count' occurrences of a value X in the array, we can keep those 
 * 'count' elements as they are and change the remaining (N - count) elements 
 * to X using the adjacent propagation rule.
 * 
 * To minimize the number of moves, we need to maximize the number of elements 
 * that are already equal to the target value. Thus, we should choose the 
 * target value X to be the most frequent element in the original array.
 * 
 * The minimum moves = N - (maximum frequency of any element in the array).
 */

void solve() {
    int N;
    if (!(cin >> N)) return;
    
    map<int, int> freq;
    int max_freq = 0;
    
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        freq[val]++;
        if (freq[val] > max_freq) {
            max_freq = freq[val];
        }
    }
    
    // If N is 0, moves are 0, though constraints say N >= 1.
    if (N == 0) {
        cout << 0 << "\n";
    } else {
        cout << (N - max_freq) << "\n";
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