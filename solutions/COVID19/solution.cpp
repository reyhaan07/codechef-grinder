#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N people at positions X_1, X_2, ..., X_N.
 * The virus spreads if the distance between two people is <= 2.
 * This implies that if we have a sequence of people where each adjacent pair
 * has a distance <= 2, they will all eventually get infected if any one of them
 * is infected.
 * 
 * Algorithm:
 * 1. For each person i (from 0 to N-1), assume they are the patient zero.
 * 2. Calculate how many people get infected starting from i.
 *    - The virus spreads to the right if X[j+1] - X[j] <= 2.
 *    - The virus spreads to the left if X[j] - X[j-1] <= 2.
 *    - Effectively, we are looking for the contiguous segment containing i
 *      where every adjacent pair has distance <= 2.
 * 3. Track the minimum and maximum size of these segments across all possible i.
 * 
 * Complexity:
 * Time: O(T * N^2) or O(T * N). Given N <= 8, this is extremely efficient.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> X(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    int min_infected = N;
    int max_infected = 1;

    for (int i = 0; i < N; ++i) {
        int current_infected = 1;
        
        // Check to the right
        for (int j = i; j < N - 1; ++j) {
            if (X[j + 1] - X[j] <= 2) {
                current_infected++;
            } else {
                break;
            }
        }
        
        // Check to the left
        for (int j = i; j > 0; --j) {
            if (X[j] - X[j - 1] <= 2) {
                current_infected++;
            } else {
                break;
            }
        }
        
        if (current_infected < min_infected) min_infected = current_infected;
        if (current_infected > max_infected) max_infected = current_infected;
    }

    cout << min_infected << " " << max_infected << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}