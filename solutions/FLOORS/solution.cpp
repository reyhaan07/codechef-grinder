#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each floor has 10 rooms.
 * Floor 1: 1-10
 * Floor 2: 11-20
 * ...
 * Floor i: (i-1)*10 + 1 to i*10
 * 
 * To find the floor number for a room X:
 * floor = (X - 1) / 10 + 1
 * 
 * The number of floors to travel is the absolute difference between the floor numbers.
 */

void solve() {
    int X, Y;
    cin >> X >> Y;
    
    // Calculate floor for X and Y
    int floorX = (X - 1) / 10 + 1;
    int floorY = (Y - 1) / 10 + 1;
    
    // The number of floors to travel is the absolute difference
    cout << abs(floorX - floorY) << "\n";
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