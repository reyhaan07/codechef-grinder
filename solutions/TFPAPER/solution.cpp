#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice has N questions.
 * She scored K marks, meaning she answered K questions correctly and (N - K) questions incorrectly.
 * Bob answered every question opposite to Alice.
 * - If Alice answered a question correctly, Bob answered it incorrectly.
 * - If Alice answered a question incorrectly, Bob answered it correctly.
 * 
 * Therefore, the number of questions Bob answered correctly is equal to the number 
 * of questions Alice answered incorrectly.
 * Bob's score = N - K.
 * 
 * Constraints:
 * 1 <= T <= 2000
 * 1 <= N <= 100
 * 0 <= K <= N
 * Time complexity: O(T)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        // Bob's score is the number of questions Alice got wrong
        long long bobs_score = n - k;
        
        cout << bobs_score << "\n";
    }
    
    return 0;
}