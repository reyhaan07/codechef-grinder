#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to find the sum of the two largest distinct integers in an array.
 * Since the constraints on A_i are small (1 <= A_i <= 1000), we can use a 
 * boolean array or a set to keep track of unique elements, or simply sort 
 * the array and pick the two largest distinct values.
 * 
 * Given N <= 10^5 and sum of N <= 2*10^5, an O(N log N) approach using sorting
 * or an O(N) approach using two variables is optimal.
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the array to easily find the largest and second largest distinct elements
    sort(a.begin(), a.end());

    int largest = a[n - 1];
    int second_largest = -1;

    // Iterate backwards to find the first element smaller than the largest
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] < largest) {
            second_largest = a[i];
            break;
        }
    }

    cout << (long long)largest + second_largest << "\n";
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