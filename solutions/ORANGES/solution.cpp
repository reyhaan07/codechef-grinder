#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N oranges, each having 10, 11, or 12 slices.
 * The minimum number of slices possible with N oranges is N * 10.
 * The maximum number of slices possible with N oranges is N * 12.
 * 
 * Since each orange can have 10, 11, or 12 slices, any integer value K 
 * between the minimum (N * 10) and the maximum (N * 12) is achievable.
 * This is because we can start with N oranges of 10 slices (total 10N) 
 * and increment the slice count of individual oranges one by one until 
 * all oranges have 12 slices (total 12N). Each increment adds 1 to the 
 * total sum, covering every integer in the range [10N, 12N].
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
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

        long long min_slices = n * 10;
        long long max_slices = n * 12;

        if (k >= min_slices && k <= max_slices) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}