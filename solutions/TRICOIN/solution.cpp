#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To form a triangle of height 'h', we need 1 + 2 + 3 + ... + h coins.
 * The sum of the first 'h' natural numbers is given by the formula:
 * S = h * (h + 1) / 2
 * 
 * We are given N coins and need to find the maximum 'h' such that:
 * h * (h + 1) / 2 <= N
 * h^2 + h <= 2N
 * h^2 + h - 2N <= 0
 * 
 * Using the quadratic formula for h^2 + h - 2N = 0:
 * h = (-1 + sqrt(1 + 8N)) / 2
 * 
 * Since we need the maximum integer h, we take the floor of this value.
 * Given N <= 10^9, 8N is 8 * 10^9, which fits in a long long.
 * The time complexity per test case will be O(1) using the math formula 
 * or O(log N) using binary search. Here, the math approach is optimal.
 */

void solve() {
    long long n;
    cin >> n;
    
    // We want the largest h such that h*(h+1)/2 <= n
    // Binary search for h in range [0, 2*10^9] (or more simply [0, 2*10^5] for small N, 
    // but 2*10^9 is safe for N=10^9).
    // Actually, since h*(h+1)/2 approx h^2/2 = N, h approx sqrt(2N).
    // For N=10^9, h approx sqrt(2*10^9) approx 44721.
    
    long long low = 0, high = 200000; // 200,000 is sufficient as 200,000^2 / 2 = 2*10^10 > 10^9
    long long ans = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * (mid + 1) / 2 <= n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
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