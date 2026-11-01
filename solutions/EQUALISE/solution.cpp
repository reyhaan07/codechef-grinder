#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two numbers A and B. We can multiply either A or B by 2 any number of times.
 * This means we can transform A into A * 2^x and B into B * 2^y.
 * We want to check if there exist non-negative integers x and y such that A * 2^x = B * 2^y.
 * 
 * This equation is equivalent to:
 * A / B = 2^(y - x)
 * 
 * Let the smaller number be min(A, B) and the larger be max(A, B).
 * We can reach equality if and only if max(A, B) is equal to min(A, B) * 2^k for some integer k >= 0.
 * In other words, if we keep multiplying the smaller number by 2, we should eventually hit the larger number.
 */

void solve() {
    int A, B;
    cin >> A >> B;

    // Ensure A is the smaller number to simplify logic
    if (A > B) {
        swap(A, B);
    }

    // Keep multiplying the smaller number by 2 until it reaches or exceeds the larger number
    while (A < B) {
        A *= 2;
    }

    // If they are equal, it's possible
    if (A == B) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}