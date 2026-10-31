#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each song has duration X.
 * The playlist consists of 3 songs: A, B, C.
 * One full cycle of the playlist (A -> B -> C) takes 3 * X minutes.
 * 
 * Let N be the total duration of the journey.
 * The number of full cycles completed is floor(N / (3 * X)).
 * 
 * In each full cycle, song C is listened to exactly once.
 * After the full cycles, the remaining time is R = N % (3 * X).
 * In the remaining time R, Chef listens to:
 * - Song A if R >= X
 * - Song B if R >= 2 * X
 * - Song C if R >= 3 * X
 * 
 * Since 3 * X is the length of a full cycle, R will always be less than 3 * X.
 * Therefore, Chef can only listen to song C completely in the remaining time 
 * if R >= 3 * X, which is impossible by definition of modulo.
 * 
 * Thus, the number of times song C is listened to completely is simply the 
 * number of full cycles: floor(N / (3 * X)).
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        // Each full cycle of A, B, C takes 3 * X minutes.
        // The number of times C is heard completely is the number of full cycles.
        long long full_cycles = n / (3 * x);
        
        cout << full_cycles << "\n";
    }
    
    return 0;
}