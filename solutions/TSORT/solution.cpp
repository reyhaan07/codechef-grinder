#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: TSORT (Simple Sorting)
 * Constraints: N <= 10^6, elements <= 10^6.
 * 
 * Approach:
 * Given the constraints (N up to 1,000,000) and the range of values (0 to 1,000,000),
 * we can use either a standard sort (O(N log N)) or Counting Sort (O(N + K)).
 * Since N and K are both 10^6, std::sort is efficient enough given the 3s time limit,
 * but using fast I/O is critical.
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Using a vector to store the numbers
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the array in non-decreasing order
    // std::sort uses Introsort, which has O(N log N) worst-case complexity
    sort(arr.begin(), arr.end());

    // Output the sorted elements
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "\n";
    }

    return 0;
}