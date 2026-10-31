#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have G girls and B boys.
 * A team consists of exactly 1 girl and 1 boy.
 * To form the maximum number of teams, we pair each girl with one boy.
 * Since B > G, we can form exactly G teams.
 * The number of boys used is G.
 * The number of boys remaining is B - G.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long g, b;
        cin >> g >> b;
        
        // The number of boys who cannot participate is the total boys minus the number of girls
        // (since each girl can form one team with one boy).
        long long remaining_boys = b - g;
        
        cout << remaining_boys << "\n";
    }
    
    return 0;
}