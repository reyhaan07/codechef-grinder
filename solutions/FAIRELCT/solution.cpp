#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * John Jackson (A) wants to have strictly more votes than Jack Johnson (B).
 * We want to minimize swaps. To maximize John's total, we should always swap
 * the smallest pack from A with the largest pack from B, provided the pack
 * from A is smaller than the pack from B.
 * 
 * Algorithm:
 * 1. Calculate sumA and sumB.
 * 2. If sumA > sumB, 0 swaps needed.
 * 3. Sort A in ascending order and B in descending order.
 * 4. Iterate through the sorted arrays, swapping A[i] and B[i] if A[i] < B[i].
 * 5. Update sums and increment swap count.
 * 6. If at any point sumA > sumB, return the count.
 * 7. If we exhaust all possible beneficial swaps and sumA <= sumB, return -1.
 */

void solve() {
    int N, M;
    cin >> N >> M;
    vector<long long> A(N), B(M);
    long long sumA = 0, sumB = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        sumA += A[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
        sumB += B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<long long>());

    int swaps = 0;
    int limit = min(N, M);
    
    for (int i = 0; i < limit; ++i) {
        if (sumA > sumB) break;
        
        if (A[i] < B[i]) {
            sumA = sumA - A[i] + B[i];
            sumB = sumB - B[i] + A[i];
            swaps++;
        } else {
            // Since A is sorted ascending and B descending, 
            // if A[i] >= B[i], no further swaps will help.
            break;
        }
    }

    if (sumA > sumB) {
        cout << swaps << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}