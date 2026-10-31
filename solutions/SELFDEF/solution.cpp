#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Self Defence Training
 * Logic: Iterate through the list of ages and count how many satisfy 10 <= age <= 60.
 * Time Complexity: O(T * N), where T is the number of test cases and N is the number of women.
 * Space Complexity: O(1) auxiliary space beyond input storage.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        
        int eligible_count = 0;
        for (int i = 0; i < n; ++i) {
            int age;
            cin >> age;
            
            // Check if the age is within the inclusive range [10, 60]
            if (age >= 10 && age <= 60) {
                eligible_count++;
            }
        }
        
        cout << eligible_count << "\n";
    }
    
    return 0;
}