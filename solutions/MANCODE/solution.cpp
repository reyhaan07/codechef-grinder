#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Maximum: To maximize the number of people, we place them at every second urinal starting from the first.
 * For N urinals, the pattern is 1, 0, 1, 0, 1...
 * The number of people is ceil(N / 2.0), which is (N + 1) / 2.
 * 
 * Minimum: To minimize the number of people such that no one else can join, we need to ensure 
 * every empty urinal is adjacent to at least one occupied urinal.
 * For N=1: 1 person (1)
 * For N=2: 1 person (0, 1 or 1, 0)
 * For N=3: 1 person (0, 1, 0)
 * For N=4: 2 people (0, 1, 0, 1)
 * For N=5: 2 people (0, 1, 0, 1, 0)
 * For N=6: 2 people (0, 1, 0, 0, 1, 0) - Wait, let's re-evaluate:
 * The pattern for minimum is placing people at indices 2, 5, 8... (1-based).
 * This is equivalent to ceil(N / 3.0), which is (N + 2) / 3.
 */

void solve() {
    int N;
    cin >> N;

    // Maximum: (N + 1) / 2
    int max_people = (N + 1) / 2;

    // Minimum: (N + 2) / 3
    int min_people = (N + 2) / 3;

    cout << max_people << " " << min_people << "\n";
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