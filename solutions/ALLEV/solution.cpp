#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have an array A of size N. We can repeatedly add the last element to the 
 * second-to-last element and remove the last element.
 * This means we can reduce the array to any size k (where 1 <= k <= N) 
 * by merging the suffix A[k+1...N] into A[k].
 * Specifically, the new A[k] will be A[k] + A[k+1] + ... + A[N].
 * 
 * We want to know if there exists a size k such that all elements 
 * A[1], A[2], ..., A[k-1] are even, AND the new A[k] is even.
 * 
 * Let S[i] be the prefix sum of the original array: S[i] = A[1] + ... + A[i].
 * The operation allows us to keep the first k-1 elements as they are, 
 * and the k-th element becomes the sum of the original A[k] through A[N].
 * 
 * So, for a fixed k, the condition is:
 * 1. A[1], A[2], ..., A[k-1] must all be even.
 * 2. (A[k] + A[k+1] + ... + A[N]) must be even.
 * 
 * Note that (A[k] + ... + A[N]) = (Total Sum) - (A[1] + ... + A[k-1]).
 * Let T = Total Sum. The condition is:
 * 1. A[i] is even for all 1 <= i < k.
 * 2. (T - (A[1] + ... + A[k-1])) is even.
 * 
 * Since A[1]...A[k-1] are all even, their sum is even.
 * Thus, (T - even) must be even, which implies T must be even.
 * 
 * So the condition simplifies to:
 * Find if there exists a k (1 <= k <= N) such that:
 * - For all i < k, A[i] is even.
 * - The total sum of the array is even.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    long long total_sum = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        total_sum += A[i];
    }

    if (total_sum % 2 != 0) {
        cout << "No" << "\n";
        return;
    }

    // Check if there exists a k such that A[0...k-2] are all even.
    // We can pick k=1 (all elements merged into A[0]), 
    // or any k where elements before it are even.
    // Actually, if the total sum is even, we can always just merge everything 
    // into the first element (k=1). Since the total sum is even, the resulting 
    // array [total_sum] will contain only one even number.
    // Therefore, if total_sum is even, the answer is always YES.
    
    cout << "Yes" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}