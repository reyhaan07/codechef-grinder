#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to satisfy: A[0] <= A[1] >= A[2] <= A[3] >= A[4] ...
 * 
 * A simple strategy is to sort the array first.
 * Let the sorted array be S[0], S[1], ..., S[N-1].
 * 
 * If we place the elements such that:
 * A[0] = S[0], A[1] = S[1], A[2] = S[2], ...
 * This doesn't guarantee the condition.
 * 
 * However, if we sort the array, we can swap adjacent pairs (0,1), (2,3), etc.
 * Or more simply:
 * Sort the array.
 * Iterate through the array and swap every adjacent pair (i, i+1) where i is even.
 * 
 * Example: 10 5 2
 * Sorted: 2 5 10
 * i=0: swap(A[0], A[1]) -> 5 2 10
 * Now: A[0]=5, A[1]=2, A[2]=10.
 * Check: A[0] <= A[1] (5 <= 2) False.
 * 
 * Correct Strategy:
 * Sort the array.
 * The condition is A[0] <= A[1], A[1] >= A[2], A[2] <= A[3], ...
 * If we sort the array, we have S[0] <= S[1] <= S[2] <= S[3] ...
 * If we swap every adjacent pair (i, i+1) where i is odd (1, 3, 5...),
 * we get:
 * A[0]=S[0], A[1]=S[2], A[2]=S[1], A[3]=S[4], A[4]=S[3]...
 * Actually, the simplest way is:
 * Sort the array. Then for every index i, if i is odd, swap A[i] with A[i-1].
 * Wait, let's test: 2 5 10
 * i=1: swap(A[1], A[0]) -> 5 2 10. (5 >= 2, 2 <= 10). Correct.
 * 
 * Let's test 1 2 3 4 5:
 * Sorted: 1 2 3 4 5
 * i=1: swap(1, 2) -> 2 1 3 4 5
 * i=3: swap(3, 4) -> 2 1 4 3 5
 * Check: 2 <= 1 (False).
 * 
 * Correct approach:
 * Sort the array.
 * Create a new array and fill it by picking elements from the sorted array:
 * Place the smallest elements at even indices and largest at odd indices.
 * Or simply: Sort the array, then swap adjacent pairs (i, i+1) for all even i.
 * Sorted: 1 2 3 4 5
 * i=0: swap(1, 2) -> 2 1 3 4 5
 * i=2: swap(3, 4) -> 2 1 4 3 5
 * Check: 2 <= 1 (False).
 * 
 * Actually, the condition A[i] <= A[i+1] for even i and A[i] >= A[i+1] for odd i
 * is satisfied by simply sorting the array and then swapping A[i] and A[i+1] for all even i.
 * Wait, the condition is A[0] <= A[1], A[1] >= A[2], A[2] <= A[3]...
 * If we sort: 1 2 3 4 5
 * Swap (0,1): 2 1 3 4 5
 * Swap (2,3): 2 1 4 3 5
 * 2 <= 1 (False).
 * 
 * Let's use the property: Sort the array, then for every i from 0 to N-2, 
 * if i is even, ensure A[i] <= A[i+1]. If i is odd, ensure A[i] >= A[i+1].
 * If we sort the array, we can just swap A[i] and A[i+1] if the condition is violated.
 * Since the array is sorted, A[i] <= A[i+1] is always true.
 * So we only need to fix the odd indices: A[i] >= A[i+1].
 * If we swap A[i] and A[i+1] for all odd i, we get:
 * 1 2 3 4 5 -> 1 3 2 5 4
 * 1 <= 3 (True), 3 >= 2 (True), 2 <= 5 (True), 5 >= 4 (True).
 * This works!
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 1; i < n - 1; i += 2) {
            swap(a[i], a[i + 1]);
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}