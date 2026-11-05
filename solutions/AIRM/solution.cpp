#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each airplane occupies a runway at its arrival time (A_i) and its departure time (D_i).
 * The problem states: "A plane uses the runway only in the minute at which it arrives or departs."
 * This means at any specific minute 't', the number of runways required is the total count 
 * of airplanes that either arrive at 't' or depart at 't'.
 * 
 * Since the time range is small (0 to 1439 minutes), we can use a frequency array 
 * (or map) to count how many events (arrivals or departures) occur at each minute.
 * The minimum number of runways required is the maximum value in this frequency array 
 * across all minutes.
 * 
 * Time Complexity: O(N) per test case, where N is the number of airplanes.
 * Space Complexity: O(M) where M is the maximum time (1440 minutes).
 */

void solve() {
    int N;
    cin >> N;
    
    // Frequency array to store the number of events at each minute.
    // Constraints: 0 <= A_i < D_i <= 1439.
    vector<int> counts(1440, 0);
    
    for (int i = 0; i < N; ++i) {
        int arrival;
        cin >> arrival;
        counts[arrival]++;
    }
    
    for (int i = 0; i < N; ++i) {
        int departure;
        cin >> departure;
        counts[departure]++;
    }
    
    int max_runways = 0;
    for (int i = 0; i < 1440; ++i) {
        if (counts[i] > max_runways) {
            max_runways = counts[i];
        }
    }
    
    cout << max_runways << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    
    return 0;
}